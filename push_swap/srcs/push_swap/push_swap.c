/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:29 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:11:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

int	main(int argc, char **argv)
{
    t_stack_node	*stack_a;
    t_stack_node	*stack_b;

    stack_a = NULL;
    stack_b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    else if (argc == 2)
        argv = split(argv[1], ' ');
    initialize_stack_a(&stack_a, argv + 1);
    if (!is_stack_sorted(stack_a))
    {
        if (get_stack_length(stack_a) == 2)
            sa(&stack_a, false);
        else if (get_stack_length(stack_a) == 3)
            sort_three_nodes(&stack_a);
        else
            sort_stacks(&stack_a, &stack_b);
    }
    free_stack(&stack_a);
    return (0);
}