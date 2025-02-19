/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:50:26 by marvin            #+#    #+#             */
/*   Updated: 2025/02/19 16:15:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	parse_op(char *comando, t_elem *pila_pri, t_elem *pila_sec)
{
    if (ft_strncmp(comando, "pa\n", 3) == 0)
        push_stack(pila_sec, pila_pri);
    else if (ft_strncmp(comando, "pb\n", 3) == 0)
        push_stack(pila_pri, pila_sec);
    else if (ft_strncmp(comando, "sa\n", 3) == 0)
        ft_swap(pila_pri);
    else if (ft_strncmp(comando, "sb\n", 3) == 0)
        ft_swap(pila_sec);
    else if (ft_strncmp(comando, "ss\n", 3) == 0)
        ft_swap_both(pila_pri, pila_sec);
    else if (ft_strncmp(comando, "ra\n", 3) == 0)
        shift_up(pila_pri);
    else if (ft_strncmp(comando, "rb\n", 3) == 0)
        shift_up(pila_sec);
    else if (ft_strncmp(comando, "rr\n", 3) == 0)
        ft_double_shift(pila_pri, pila_sec, 0);
    else if (ft_strncmp(comando, "rra\n", 4) == 0)
        shift_down(pila_pri);
    else if (ft_strncmp(comando, "rrb\n", 4) == 0)
        shift_down(pila_sec);
    else if (ft_strncmp(comando, "rrr\n", 4) == 0)
        ft_double_shift(pila_pri, pila_sec, 1);
    else
        return (-1);
    return (1);
}

void	process_operation(t_elem *pila_a, t_elem *pila_b, char *orden)
{
    int	resultado;

    if (orden == NULL || ft_strlen(orden) == 1)
        resultado = -1;
    else
        resultado = parse_op(orden, pila_a, pila_b);
    if (orden != NULL)
        free(orden);
    if (resultado == -1)
    {
        free(pila_a);
        free(pila_b);
        get_next_line(0, 1);
        ft_putstr_fd("Error\n", 1);
        exit(EXIT_FAILURE);
    }
}

void	solve_stdin(t_elem *pila_a, t_elem *pila_b)
{
    int	estado;
    char	*entrada;
    int	posicion;

    estado = 1;
    while (estado)
    {
        entrada = get_next_line(0, 0);
        if (entrada == NULL)
            estado = 0;
        else
            process_operation(pila_a, pila_b, entrada);
    }
    posicion = 0;
    while (pila_b[posicion].index != -1 && pila_b[posicion].filled != 1)
        posicion++;
    if (is_sorted(pila_a) == 1 && pila_b[posicion].index == -1)
        ft_putstr_fd("OK\n", 1);
    else
        ft_putstr_fd("KO\n", 1);
}
