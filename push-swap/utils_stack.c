/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:30:33 by marvin           #+#    #+#             */
/*   Updated: 2025/02/17 17:21:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_elem	*create_tab(int total_args, char **args, int activar)
{
    t_elem	*elementos;
    int		pos;

    elementos = malloc(sizeof(t_elem) * (total_args + 1));
    if (elementos == NULL)
        return (NULL);
    pos = 0;
    while (pos < total_args - 1)
    {
        if (activar == 1)
        {
            elementos[pos].num = ft_atoi(args[pos]);
            elementos[pos].filled = 1;
        }
        else
        {
            elementos[pos].num = 0;
            elementos[pos].filled = 0;
        }
        elementos[pos].index = pos;
        pos++;
    }
    elementos[pos].index = -1;
    return (elementos);
}

int	is_sorted(t_elem *pila)
{
    int	indice;

    indice = 0;
    while (pila[indice + 1].index != -1)
    {
        if (pila[indice].num > pila[indice + 1].num)
            return (-1);
        indice++;
    }
    return (1);
}

int	get_start_stack(t_elem *pila)
{
    int	inicio;

    inicio = 0;
    while (pila[inicio].index != -1 && pila[inicio].filled != 1)
        inicio++;
    if (pila[inicio].index == -1)
        inicio--;
    return (inicio);
}

int	get_end_stack(t_elem *pila)
{
    int	final;

    final = 0;
    while (pila[final].index != -1)
        final++;
    final--;
    return (final);
}
