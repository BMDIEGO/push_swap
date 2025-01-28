/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:39:19 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:31:00 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el carácter 'c' es un dígito numérico.
// Devuelve 1 si 'c' es un número del 0 al 9, de lo contrario devuelve 0.
// Linea 20 - Comprueba si 'c' está en el rango de caracteres numéricos ('0' a '9').
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* 
int main()
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('a'));
} */