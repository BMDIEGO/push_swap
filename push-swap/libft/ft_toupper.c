/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:27 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:37:50 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que convierte un carácter en mayúscula si es una letra minúscula.
// Retorna el carácter convertido o el mismo carácter si no es una letra minúscula.

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/* 
int main()
{
	char c = 'a';
	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
} */