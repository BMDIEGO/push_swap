/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:50:13 by marvin           #+#    #+#             */
/*   Updated: 2025/02/25 18:10:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_elem {
    int		num;
    int		filled;
    int		index;
}	t_elem;

/* Utilidades y creación de pilas */
t_elem	*create_tab(int total_args, char **args, int activar);
void	show_stack(t_elem *stack_a, t_elem *stack_b, int stack_size);

/* Manejo de argumentos */
char	**split_args(int *argc, char **argv, int *tofree);
int		args_len(char **split_args);

/* Verificaciones y errores */
int		is_sorted(t_elem *stack);
int		check_if_numeric(int total, char **items);
int		check_for_repeats(int total, char **items);
int		handle_input_errors(int total, char **items);

/* Operaciones sobre las pilas */
void	push_stack(t_elem *stack_a, t_elem *stack_b);
void	shift_down(t_elem *stack);
void	shift_up(t_elem *stack);
void	ft_swap(t_elem *stack);
void	ft_swap_both(t_elem *stack_a, t_elem *stack_b);
void	ft_double_shift(t_elem *stack_a, t_elem *stack_b, int modo);

/* Funciones auxiliares de pila */
int		get_start_stack(t_elem *stack);
int		get_end_stack(t_elem *stack);
int		get_min_stack(t_elem *stack);

/* Operaciones (nuevas o modificadas) */
void	move_element(t_elem *source, t_elem *destination);
void	rotate_up(t_elem *stack);
void	rotate_down(t_elem *stack);
void	swap_elements(t_elem *stack);

/* Funciones internas */
void	release_args(char **array, int must_free);
void	solve_stdin(t_elem *stack_a, t_elem *stack_b);

#endif