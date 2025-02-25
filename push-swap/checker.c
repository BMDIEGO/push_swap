/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:16:26 by marvin            #+#    #+#             */
/*   Updated: 2025/02/25 18:17:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	release_args(char **array, int must_free)
{
    int	index;

    if (must_free)
    {
        index = 0;
        while (array[index] != 0)
        {
            free(array[index]);
            index++;
        }
        free(array[index]);
        free(array);
    }
}

int	main(int qty, char **info)
{
    int		errcheck;
    t_elem	*pile_a;
    t_elem	*pile_b;
    char	**splitted_args;
    int		need_free;

    need_free = 0;
    info++;
    splitted_args = info;
    if (qty == 2)
        splitted_args = split_args(&qty, info, &need_free);
    errcheck = ft_handle_errors(qty, splitted_args);
    if (errcheck == -1 || errcheck == 0)
    {
        release_args(splitted_args, need_free);
        return (0);
    }
    pile_a = create_tab(qty, splitted_args, 1);
    pile_b = create_tab(qty, splitted_args, 0);
    release_args(splitted_args, need_free);
    solve_stdin(pile_a, pile_b);
    free(pile_a);
    free(pile_b);
    return (0);
}
