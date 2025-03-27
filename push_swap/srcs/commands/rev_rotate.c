/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:08 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:06:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	rev_rotate(t_stack_node **stack)
{
    t_stack_node	*last_node;

    if (!*stack || !(*stack)->next)
        return ;
    last_node = find_last(*stack);
    last_node->previous->next = NULL;
    last_node->next = *stack;
    last_node->previous = NULL;
    *stack = last_node;
    last_node->next->previous = last_node;
}

void	rra(t_stack_node **stack_a, bool print)
{
    rev_rotate(stack_a);
    if (!print)
        ft_printf("rra\n");
}

void	rrb(t_stack_node **stack_b, bool print)
{
    rev_rotate(stack_b);
    if (!print)
        ft_printf("rrb\n");
}

void	rrr(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
    rev_rotate(stack_a);
    rev_rotate(stack_b);
    if (!print)
        ft_printf("rrr\n");
}