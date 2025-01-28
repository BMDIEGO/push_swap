/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:16 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:35:21 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que concatena la cadena 'src' al final de 'dst', con un tamaño máximo de 'dstsize'.
// Retorna la longitud total de la cadena que intenta crear ('dst' + 'src').
// Linea 31 - Calcula la longitud de 'dst' hasta el tamaño 'dstsize'.
// Linea 35 - Si el tamaño de 'dst' es igual a 'dstsize', retorna la suma de 'dstsize' y 'slen'.
// Linea 37 - Copia 'src' a 'dst' mientras haya espacio disponible.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dst[dlen] && dlen < dstsize)
		dlen++;
	while (src[slen])
		slen++;
	if (dlen == dstsize)
		return (dstsize + slen);
	while (src[i] && dlen + i < dstsize - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/* 
int main()
{
	char dst[10] = "Hola";
	char src[] = " Mundo";
	printf("%lu\n", ft_strlcat(dst, src, 10));
	printf("%s\n", dst);
} */