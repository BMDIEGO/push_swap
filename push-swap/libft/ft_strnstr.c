/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:57:19 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:36:45 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que busca la primera aparición de la cadena 'needle' en 'haystack' dentro de los primeros 'len' caracteres.
// Retorna un puntero al inicio de la subcadena encontrada o NULL si 'needle' no se encuentra.
// Linea 29 - Si 'needle' es una cadena vacía, retorna 'haystack'.
// Linea 31 - Obtiene la longitud de 'needle'.
// Linea 33 - Recorre 'haystack' hasta 'len', asegurándose de no sobrepasar el límite.
// Linea 35 - Compara la subcadena de 'haystack' con 'needle'.
// Linea 36 - Si coincide, retorna un puntero al inicio de la subcadena encontrada.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/* 
int main()
{
	char *haystack = "Hola Mundo";
	char *needle = "Mundo";
	printf("%s\n", ft_strnstr(haystack, needle, 10));
	printf("%s\n", strnstr(haystack, needle, 10));
} */