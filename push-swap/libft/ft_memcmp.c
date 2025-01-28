/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:55:40 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:23:53 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que compara los primeros 'n' bytes de las áreas de memoria 's1' y 's2'.
// Devuelve un valor negativo, cero o positivo dependiendo de si 's1' es menor, igual o mayor que 's2'.
// Linea 27 - Convierte 's*' a un puntero a unsigned char.
// Linea 29 - Itera sobre los primeros 'n' bytes de ambas áreas de memoria.
// Linea 31 - Si los bytes en las posiciones actuales son diferentes, retorna la diferencia.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/* 
int main()
{
	char *s1 = "Hola Mundo";
	char *s2 = "Hola Mundo";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d\n", memcmp(s1, s2, 10));
} */