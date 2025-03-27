/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:36 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:13:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

int	get_stack_length(t_stack_node *stack)
{
    int	count;

    if (!stack) 
        return (0);
    count = 0;
    while (stack)
    {
        stack = stack->next;
        count++;
    }
    return (count);
}

t_stack_node	*find_last_node(t_stack_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

bool	is_stack_sorted(t_stack_node *stack)
{
    if (!stack)
        return (true);
    while (stack->next)
    {
        if (stack->value > stack->next->value)
            return (false);
        stack = stack->next;
    }
    return (true);
}

t_stack_node	*find_minimum_node(t_stack_node *stack)
{
    long			min;
    t_stack_node	*min_node;

    if (!stack)
        return (NULL);
    min = LONG_MAX;
    while (stack)
    {
        if (stack->value < min)
        {
            min = stack->value;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node); 
}

t_stack_node	*find_maximum_node(t_stack_node *stack)
{
    long			max;
    t_stack_node	*max_node;

    if (!stack)
        return (NULL);
    max = LONG_MIN;
    while (stack)
    {
        if (stack->value > max)
        {
            max = stack->value;
            max_node = stack;
        }
        stack = stack->next;
    }
    return (max_node);
}