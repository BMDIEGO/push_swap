/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:42:16 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:31:12 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que copia 'len' bytes de la memoria apuntada por 'src' a la memoria apuntada por 'dst'.
// Permite la superposición de las áreas de memoria. Devuelve un puntero a 'dst'.
// Linea 29 - Convierte 'dst' a un puntero a unsigned char.
// Linea 31 - Si el destino y la fuente son iguales, no se necesita hacer nada, se devuelve 'dst'.
// Linea 33 - Si la dirección de origen está por debajo de la de destino, se realiza la copia hacia atrás
// Linea 38 - Copia el byte actual de 'src' a 'dst' y avanza ambos punteros.


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
/* 
int main()
{
	char src[] = "Hola Mundo";
	char dst[10];
	ft_memmove(dst, src, 10);
	printf("%s\n", dst);
} */