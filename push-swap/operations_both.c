/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:26:02 by marvin           #+#    #+#             */
/*   Updated: 2025/02/17 17:13:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap_both(t_elem *pilaX, t_elem *pilaY)
{
    ft_swap(pilaX);
    ft_swap(pilaY);
}

void	ft_double_shift(t_elem *p_elem1, t_elem *p_elem2, int modo)
{
    if (modo == 1)
    {
        shift_down(p_elem1);
        shift_down(p_elem2);
    }
    else
    {
        shift_up(p_elem1);
        shift_up(p_elem2);
    }
}
