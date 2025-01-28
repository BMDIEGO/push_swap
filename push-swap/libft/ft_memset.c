/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:12 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:31:31 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que establece los primeros 'n' bytes de la memoria apuntada por 's'
// al valor del carácter 'c'. Devuelve un puntero a 's'.

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/* 
int main()
{
	char s[10] = "Hola Mundo";
	ft_memset(s, 'a', 10);
	printf("%s\n", s);
} */