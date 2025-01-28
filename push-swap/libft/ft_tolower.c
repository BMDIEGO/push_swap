/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:43:35 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:37:33 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que convierte un carácter en minúscula si es una letra mayúscula.
// Retorna el carácter convertido o el mismo carácter si no es una letra mayúscula.

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* 
int main()
{
	char c = 'A';
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
} */