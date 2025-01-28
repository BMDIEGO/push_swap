/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:40:08 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:29:04 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que verifica si el carácter 'c' es alfanumérico (letra o número).
// Devuelve 1 si 'c' es una letra (a-z, A-Z) o un dígito (0-9), de lo contrario devuelve 0.
// Linea 21 - Comprueba si 'c' es una letra (usando ft_isalpha) o un dígito (usando ft_isdigit).

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/* 
int main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('!'));
} */