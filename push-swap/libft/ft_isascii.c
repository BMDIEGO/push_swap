/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:40:19 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:30:24 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el valor entero 'c' pertenece al conjunto de caracteres ASCII.
// Devuelve 1 si 'c' está en el rango de 0 a 127, de lo contrario devuelve 0.
// Linea 20 - Comprueba si 'c' está dentro del rango de valores ASCII.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* 
int main()
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('\n'));
} */