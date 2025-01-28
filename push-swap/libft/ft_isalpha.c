/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:37:54 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:29:50 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el carácter 'c' es una letra.
// Devuelve 1 si 'c' es una letra mayúscula (A-Z) o minúscula (a-z), de lo contrario devuelve 0.
// Linea 22 - Comprueba si 'c' está dentro de los rangos de letras mayúsculas o minúsculas.
	

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/* 
int main()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(' '));
} */