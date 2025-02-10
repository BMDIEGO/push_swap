/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/3 16:36:22 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 17:14:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	move_element(t_elem *source, t_elem *destination)
{
	int	source_pos;
	int	dest_pos;

	source_pos = 0;
	while (source[source_pos].index != -1 && source[source_pos].filled != 1)
		source_pos++;
	dest_pos = 0;
	while (destination[dest_pos].index != -1 && destination[dest_pos].filled != 1)
		dest_pos++;
	dest_pos--;
	if (dest_pos == -1)
		return ;
	destination[dest_pos].num = source[source_pos].num;
	source[source_pos].num = 0;
	destination[dest_pos].filled = 1;
	source[source_pos].filled = 0;
}

void	rotate_up(t_elem *stack)
{
	int	begin_pos;
	int	end_pos;
	int	temp_val;
	int	previous_val;
	int	i;

	begin_pos = 0;
	while (stack[begin_pos].index != -1 && stack[begin_pos].filled != 1)
		begin_pos++;
	end_pos = 0;
	while (stack[end_pos].index != -1)
		end_pos++;
	end_pos--;
	i = end_pos;
	temp_val = stack[i].num;
	while (i > begin_pos)
	{
		previous_val = stack[i - 1].num;
		stack[i - 1].num = temp_val;
		temp_val = previous_val;
		i--;
	}
	stack[end_pos].num = temp_val;
}

void	rotate_down(t_elem *stack)
{
	int	begin_pos;
	int	end_pos;
	int	temp_val;
	int	previous_val;
	int	i;

	begin_pos = 0;
	while (stack[begin_pos].index != -1 && stack[begin_pos].filled != 1)
		begin_pos++;
	end_pos = 0;
	while (stack[end_pos].index != -1)
		end_pos++;
	end_pos--;
	i = begin_pos;
	temp_val = stack[i].num;
	while (i < end_pos)
	{
		previous_val = stack[i + 1].num;
		stack[i + 1].num = temp_val;
		temp_val = previous_val;
		i++;
	}
	stack[begin_pos].num = temp_val;
}

void	swap_elements(t_elem *stack)
{
	int	begin_pos;
	int	temp_val;

	begin_pos = get_start_stack(stack);
	temp_val = stack[begin_pos].num;
	stack[begin_pos].num = stack[begin_pos + 1].num;
	stack[begin_pos + 1].num = temp_val;
}
