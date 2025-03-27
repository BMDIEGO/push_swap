/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:17 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:08:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

void	sort_three_nodes(t_stack_node **stack_a)
{
    t_stack_node	*biggest_node;

    biggest_node = find_maximum_node(*stack_a);
    if (biggest_node == *stack_a)
        ra(stack_a, false);
    else if ((*stack_a)->next == biggest_node)
        rra(stack_a, false);
    if ((*stack_a)->value > (*stack_a)->next->value)
        sa(stack_a, false);
}