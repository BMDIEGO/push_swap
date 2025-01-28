/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:40:54 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:36:01 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que calcula la longitud de la cadena 'str' (sin contar el carácter nulo).
// Retorna el número de caracteres en la cadena.

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%lu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
} */