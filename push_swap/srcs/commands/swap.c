/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:19 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:08:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static void	swap(t_stack_node **head)
{
    if (!*head || !(*head)->next)
        return ;
    *head = (*head)->next;
    (*head)->previous->previous = *head;
    (*head)->previous->next = (*head)->next;
    if ((*head)->next)
        (*head)->next->previous = (*head)->previous;
    (*head)->next = (*head)->previous;
    (*head)->previous = NULL;
}

void	sa(t_stack_node	**stack_a, bool print)
{
    swap(stack_a);
    if (!print)
        ft_printf("sa\n");
}

void	sb(t_stack_node **stack_b, bool print)
{
    swap(stack_b);
    if (!print)
        ft_printf("sb\n");
}

void	ss(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
    swap(stack_a);
    swap(stack_b);
    if (!print)
        ft_printf("ss\n");
}