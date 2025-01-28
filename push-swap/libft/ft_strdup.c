/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:19:49 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:34:08 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que duplica la cadena 'src' asignando memoria para la nueva cadena.
// Retorna un puntero a la nueva cadena, o NULL si falla la asignación de memoria.
// Linea 24 - Almacena el tamaño de la cadena fuente 'src'.
// Linea 27 - Calcula la longitud de la cadena fuente.
// Linea 28 - Asigna memoria para la nueva cadena, incluyendo espacio para el carácter nulo ('\0').
// Linea 31 - Copia el contenido de 'src' a 'dest' usando ft_memcpy.

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
} */