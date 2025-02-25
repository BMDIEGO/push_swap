/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:58:26 by marvin            #+#    #+#             */
/*   Updated: 2025/02/25 18:17:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	check_if_numeric(int total, char **items)
{
    int idx;
    int char_pos;

    idx = 0;
    while (idx < (total - 1))
    {
        char_pos = 0;
        while (items[idx][char_pos] != '\0')
        {
            if (ft_isdigit(items[idx][char_pos]) == 0)
            {
                if (!(char_pos == 0 && items[idx][char_pos] == '-'))
                    return (-1);
            }
            char_pos++;
        }
        idx++;
    }
    return (1);
}

int	check_for_repeats(int total, char **items)
{
    int outer;
    int inner;

    if (total == 2)
    {
        if (ft_atoi(items[0]) == 2147483650)
            return (-1);
    }
    outer = 0;
    while (outer < total)
    {
        inner = outer + 1;
        while (inner < (total - 1))
        {
            if (ft_atoi(items[outer]) == 2147483650 || ft_atoi(items[inner]) == 2147483650)
                return (-1);
            if (ft_atoi(items[outer]) == ft_atoi(items[inner]))
                return (-1);
            inner++;
        }
        outer++;
    }
    return (0);
}

int	handle_input_errors(int total, char **items)
{
    if (total <= 1)
        return (0);
    if (check_if_numeric(total, items) == -1)
    {
        ft_putstr_fd("Error\n", 1);
        return (-1);
    }
    if (check_for_repeats(total, items) == -1)
    {
        ft_putstr_fd("Error\n", 1);
        return (-1);
    }
    return (1);
}
