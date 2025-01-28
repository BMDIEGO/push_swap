/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:42:42 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:35:47 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que copia la cadena 'src' en 'dst', asegurando que 'dst' esté terminada en '\0'.
// Copia hasta 'dstsize' - 1 caracteres y retorna la longitud de 'src'.
// Linea 26 - Si 'dstsize' es mayor que 0, realiza la copia de caracteres de 'src' a 'dst'.
// Linea 28 - Copia caracteres de 'src' en 'dst' hasta que se complete el tamaño 'dstsize' - 1.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/* 
int main()
{
	char dst[10] = "Hola";
	char src[] = " Mundo";
	printf("%lu\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
} */