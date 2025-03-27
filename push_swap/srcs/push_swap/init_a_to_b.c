/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:24 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:10:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

void	update_current_positions(t_stack_node *stack)
{
    int	i;
    int	median;

    i = 0;
    if (!stack)
        return ;
    median = get_stack_length(stack) / 2;
    while (stack)
    {
        stack->position = i;
        stack->is_above_median = (i <= median);
        stack = stack->next;
        ++i;
    }
}

static void	set_target_a(t_stack_node *stack_a, t_stack_node *stack_b)
{
    t_stack_node	*current_b;
    t_stack_node	*target;
    long			best_match_value;

    while (stack_a)
    {
        best_match_value = LONG_MIN;
        current_b = stack_b;
        while (current_b)
        {
            if (current_b->value < stack_a->value 
                && current_b->value > best_match_value)
            {
                best_match_value = current_b->value;
                target = current_b;
            }
            current_b = current_b->next;
        }
        if (best_match_value == LONG_MIN)
            stack_a->target = find_maximum_node(stack_b);
        else
            stack_a->target = target;
        stack_a = stack_a->next;
    }
}

static void	cost_analysis_a(t_stack_node *stack_a, t_stack_node *stack_b)
{
    int	len_a;
    int	len_b;

    len_a = get_stack_length(stack_a);
    len_b = get_stack_length(stack_b);
    while (stack_a)
    {
        stack_a->move_cost = stack_a->position;
        if (!stack_a->is_above_median)
            stack_a->move_cost = len_a - stack_a->position;
        if (stack_a->target->is_above_median)
            stack_a->move_cost += stack_a->target->position;
        else
            stack_a->move_cost += len_b - stack_a->target->position;
        stack_a = stack_a->next;
    }
}

void	mark_cheapest_node(t_stack_node *stack)
{
    long			cheapest_cost;
    t_stack_node	*cheapest_node;

    if (!stack)
        return ;
    cheapest_cost = LONG_MAX;
    while (stack)
    {
        if (stack->move_cost < cheapest_cost)
        {
            cheapest_cost = stack->move_cost;
            cheapest_node = stack;
        }
        stack = stack->next;
    }
    cheapest_node->is_cheapest = true;
}

void	initialize_nodes_a(t_stack_node *stack_a, t_stack_node *stack_b)
{
    update_current_positions(stack_a);
    update_current_positions(stack_b);
    set_target_a(stack_a, stack_b);
    cost_analysis_a(stack_a, stack_b);
    mark_cheapest_node(stack_a);
}