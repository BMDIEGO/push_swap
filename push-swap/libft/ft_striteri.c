/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:27:16 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:34:27 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que aplica la función 'f' a cada carácter de la cadena 's'.
// La función 'f' recibe como parámetros el índice del carácter y un puntero al carácter mismo.
// Linea 28 - Aplica la función 'f' al carácter en la posición 'i'.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/* 
int main()
{
	char s[] = "Hola Mundo";
	ft_striteri(s, ft_putchar_fd);
} */