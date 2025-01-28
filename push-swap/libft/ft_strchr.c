/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:47 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:33:54 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que busca la primera aparición del carácter 'c' en la cadena 's'.
// Retorna un puntero a la primera aparición de 'c', o NULL si no se encuentra.
// Linea 21 - Recorre la cadena 's' hasta encontrar el carácter 'c' o hasta llegar al final de la cadena.

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_strchr(s, 'M'));
	printf("%s\n", strchr(s, 'M'));
} */