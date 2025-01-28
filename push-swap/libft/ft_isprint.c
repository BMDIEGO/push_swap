/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:40:37 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:31:35 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el carácter 'c' es imprimible, es decir, si tiene una representación visible.
// Devuelve 1 si 'c' está en el rango de caracteres imprimibles (32 a 126), de lo contrario devuelve 0.
// Linea 20 - Comprueba si 'c' está dentro del rango de caracteres imprimibles ASCII.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/* 
int main()	
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint('\n'));
} */