/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:33 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:12:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static long	ft_atol(const char *str)
{
    long	result;
    int		sign;

    result = 0;
    sign = 1; 
    while (*str == ' ' || *str == '\t' || *str == '\n' || \
            *str == '\r' || *str == '\f' || *str == '\v')
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (ft_isdigit(*str))
        result = result * 10 + (*str++ - '0');
    return (result * sign);
}

static void	append_node(t_stack_node **stack, int value)
{
    t_stack_node	*node;
    t_stack_node	*last_node;

    if (!stack)
        return ;
    node = malloc(sizeof(t_stack_node));
    if (!node)
        return ;
    node->next = NULL;
    node->value = value;
    node->is_cheapest = false;
    if (!(*stack))
    {
        *stack = node;
        node->previous = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node->next = node;
        node->previous = last_node;
    }
}

void	initialize_stack_a(t_stack_node **stack_a, char **argv)
{
    long	value;
    int		i;

    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(stack_a);
        value = ft_atol(argv[i]);
        if (value > INT_MAX || value < INT_MIN)
            free_errors(stack_a);
        if (error_duplicate(*stack_a, (int)value))
            free_errors(stack_a); 
        append_node(stack_a, (int)value);
        i++;
    }
}

t_stack_node	*get_cheapest_node(t_stack_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack)
    {
        if (stack->is_cheapest)
            return (stack);
        stack = stack->next;
    }
    return (NULL);
}

void	prepare_for_push(t_stack_node **stack,
                        t_stack_node *top_node,
                        char stack_name)
{
    while (*stack != top_node)
    {
        if (stack_name == 'a')
        {
            if (top_node->is_above_median)
                ra(stack, false);
            else
                rra(stack, false);
        }
        else if (stack_name == 'b')
        {
            if (top_node->is_above_median)
                rb(stack, false);
            else
                rrb(stack, false);
        }	
    }
}