/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:21 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:09:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

int	error_syntax(char *number_str)
{
    if (!(*number_str == '+' || *number_str == '-' || (*number_str >= '0' && *number_str <= '9')))
        return (1);
    if ((*number_str == '+' || *number_str == '-') && !(number_str[1] >= '0' && number_str[1] <= '9'))
        return (1);
    while (*++number_str)
    {
        if (!(*number_str >= '0' && *number_str <= '9'))
            return (1);
    }
    return (0);
}

int	error_duplicate(t_stack_node *stack_a, int value)
{
    if (!stack_a)
        return (0);
    while (stack_a)
    {
        if (stack_a->value == value)
            return (1);
        stack_a = stack_a->next;
    }
    return (0);
}

void	free_stack(t_stack_node **stack)
{
    t_stack_node	*tmp;
    t_stack_node	*current;

    if (!stack)
        return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->value = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}

void	free_errors(t_stack_node **stack_a)
{
    free_stack(stack_a);
    ft_printf("Error\n");
    exit(1);
}