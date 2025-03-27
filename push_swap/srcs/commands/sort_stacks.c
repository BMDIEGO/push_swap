/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:12 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:07:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	rotate_both(t_stack_node **stack_a, t_stack_node **stack_b, t_stack_node *cheapest_node)
{
    while (*stack_b != cheapest_node->target && *stack_a != cheapest_node)
        rr(stack_a, stack_b, false);
    update_current_positions(*stack_a);
    update_current_positions(*stack_b);
}

static void	rev_rotate_both(t_stack_node **stack_a, t_stack_node **stack_b, t_stack_node *cheapest_node)
{
    while (*stack_b != cheapest_node->target && *stack_a != cheapest_node)
        rrr(stack_a, stack_b, false);
    update_current_positions(*stack_a);
    update_current_positions(*stack_b);
}

static void	move_a_to_b(t_stack_node **stack_a, t_stack_node **stack_b)
{
    t_stack_node	*cheapest_node;

    cheapest_node = get_cheapest(*stack_a); 
    if (cheapest_node->is_above_median && cheapest_node->target->is_above_median)
        rotate_both(stack_a, stack_b, cheapest_node);
    else if (!(cheapest_node->is_above_median) && !(cheapest_node->target->is_above_median))
        rev_rotate_both(stack_a, stack_b, cheapest_node);
    prepare_for_push(stack_a, cheapest_node, 'a');
    prepare_for_push(stack_b, cheapest_node->target, 'b');
    pb(stack_b, stack_a, false);
}

static void	move_b_to_a(t_stack_node **stack_a, t_stack_node **stack_b)
{
    prepare_for_push(stack_a, (*stack_b)->target, 'a');
    pa(stack_a, stack_b, false);
}

static void	min_on_top(t_stack_node **stack_a)
{
    while ((*stack_a)->value != find_minimum_node(*stack_a)->value)
    {
        if (find_minimum_node(*stack_a)->is_above_median)
            ra(stack_a, false);
        else
            rra(stack_a, false);
    }
}

void	sort_stacks(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int	len_a;

    len_a = get_stack_length(*stack_a);
    if (len_a-- > 3 && !is_stack_sorted(*stack_a))
        pb(stack_b, stack_a, false);
    if (len_a-- > 3 && !is_stack_sorted(*stack_a))
        pb(stack_b, stack_a, false);
    while (len_a-- > 3 && !is_stack_sorted(*stack_a))
    {
        initialize_nodes_a(*stack_a, *stack_b);
        move_a_to_b(stack_a, stack_b);
    }
    sort_three_nodes(stack_a);
    while (*stack_b)
    {
        initialize_nodes_b(*stack_a, *stack_b);
        move_b_to_a(stack_a, stack_b);
    }
    update_current_positions(*stack_a);
    min_on_top(stack_a);
}