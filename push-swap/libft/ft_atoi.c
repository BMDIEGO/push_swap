/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:58:17 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/02 16:51:23 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que convierte una cadena de caracteres (string) en un número entero (int).
// La conversión se detiene cuando encuentra un carácter que no sea un número.
// Linea 40 - Mientras el carácter actual sea un dígito, continúa la conversión.
// Linea 43 - Desplaza los dígitos previos a la izquierda (equivale a multiplicar por 10).
// Linea 43 - Convierte el carácter a su valor numérico y lo suma.

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
 
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}

	return (result * sign);
}
/* 
int main()
{
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("   +42"));
	printf("%d\n", ft_atoi("   42"));
}
 */