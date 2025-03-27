/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:10 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:07:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	rotate(t_stack_node **stack)
{
    t_stack_node	*last_node;

    if (!*stack || !(*stack)->next)
        return ;
    last_node = find_last(*stack); 
    last_node->next = *stack;
    *stack = (*stack)->next;
    (*stack)->previous = NULL;
    last_node->next->previous = last_node;
    last_node->next->next = NULL;
}		

void	ra(t_stack_node **stack_a, bool print)
{
    rotate(stack_a);
    if (!print)
        ft_printf("ra\n");
}

void	rb(t_stack_node **stack_b, bool print)
{
    rotate(stack_b);
    if (!print)
        ft_printf("rb\n");
}

void	rr(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
    rotate(stack_a);
    rotate(stack_b);
    if (!print)
        ft_printf("rr\n");
}