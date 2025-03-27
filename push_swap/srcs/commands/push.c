/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:05 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:05:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	push(t_stack_node **destination, t_stack_node **source)
{
    t_stack_node	*node_to_push;

    if (!*source)
        return ;
    node_to_push = *source;
    *source = (*source)->next;
    if (*source)
        (*source)->previous = NULL;
    node_to_push->previous = NULL;
    if (!*destination)
    {
        *destination = node_to_push;
        node_to_push->next = NULL;
    }
    else
    {
        node_to_push->next = *destination;
        node_to_push->next->previous = node_to_push;
        *destination = node_to_push;
    }
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
    push(stack_a, stack_b); 
    if (!print) 
        ft_printf("pa\n");
}

void	pb(t_stack_node **stack_b, t_stack_node **stack_a, bool print)
{
    push(stack_b, stack_a);
    if (!print)
        ft_printf("pb\n");
}