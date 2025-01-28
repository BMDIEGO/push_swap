/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:55:16 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:36:32 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que compara las dos cadenas 's1' y 's2' hasta 'n' caracteres o hasta encontrar una diferencia.
// Retorna la diferencia entre los caracteres en la primera posición donde las cadenas difieren.
// Linea 23 - Mientras queden caracteres por comparar (n > 0) y haya caracteres en 's1' o 's2'.
// Linea 25 - Si los caracteres actuales de 's1' y 's2' son diferentes, retorna la diferencia.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/* 
int main()
{
	char *s1 = "Hola Mundo";
	char *s2 = "Hola Mundo";
	printf("%d\n", ft_strncmp(s1, s2, 10));
	printf("%d\n", strncmp(s1, s2, 10));
} */