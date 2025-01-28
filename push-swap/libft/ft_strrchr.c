/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:52:37 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:36:55 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que busca la última aparición del carácter 'c' en la cadena 's'.
// Retorna un puntero a la última ocurrencia de 'c' en 's', o NULL si 'c' no se encuentra.
// Linea 27 - Recorre la cadena hacia atrás buscando el carácter 'c'.
// Linea 29 - Si se encuentra el carácter, retorna un puntero a esa posición en 's'.

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_strrchr(s, 'M'));
	printf("%s\n", strrchr(s, 'M'));
} */