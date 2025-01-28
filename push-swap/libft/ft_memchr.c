/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:55:28 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:23:33 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que busca el primer ocurrencia del carácter 'c' en los primeros 'n' bytes del bloque de memoria 's'.
// Devuelve un puntero a la posición donde se encuentra el carácter, o NULL si no se encuentra.
// Linea 25 - Puntero que se utilizará para recorrer la memoria.
// Linea 27 - Convierte 's' a un puntero a unsigned char.
// Linea 28 - Itera sobre los primeros 'n' bytes de la memoria.
// Linea 30 - Si el carácter actual coincide con 'c', devuelve un puntero a esa posición.

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_memchr(s, 'M', 9));
	printf("%s\n", memchr(s, 'M', 9));
}
 */