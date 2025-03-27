/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:27 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:10:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	set_target_b(t_stack_node *stack_a, t_stack_node *stack_b)
{
    t_stack_node	*current_a;
    t_stack_node	*target;
    long			best_match_value;

    while (stack_b)
    {
        best_match_value = LONG_MAX;
        current_a = stack_a;
        while (current_a)
        {
            if (current_a->value > stack_b->value 
                && current_a->value < best_match_value)
            {
                best_match_value = current_a->value;
                target = current_a;
            }
            current_a = current_a->next;
        }
        if (best_match_value == LONG_MAX)
            stack_b->target = find_minimum_node(stack_a);
        else
            stack_b->target = target;
        stack_b = stack_b->next;
    }
}

void	initialize_nodes_b(t_stack_node *stack_a, t_stack_node *stack_b)
{
    update_current_positions(stack_a);
    update_current_positions(stack_b);
    set_target_b(stack_a, stack_b);
}