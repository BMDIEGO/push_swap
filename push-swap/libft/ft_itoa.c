/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:26:23 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:33:15 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función auxiliar que convierte el número en caracteres y los coloca en la cadena 's'.
// 'number' es el valor numérico a convertir, 'len' es la longitud de la cadena.
// Linea 29 - Recorre el número y lo convierte en caracteres ASCII.
// Linea 31 - Convierte el dígito a su valor ASCII y lo almacena en la cadena.

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

// Función auxiliar que calcula la longitud de la cadena necesaria para representar el número 'n' como texto.
// Si 'n' es 0 o negativo, la longitud será mayor para incluir el signo o el carácter '0'.

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
// Función principal que convierte un número entero 'n' en una cadena de caracteres (string).
// Devuelve un puntero a la cadena resultante o NULL si falla la asignación de memoria.
// Linea 65 - Calcula la longitud necesaria para la cadena.
// Linea 66 - Asigna memoria para la cadena, incluyendo el terminador nulo.
// Linea 72 - Si 'n' es negativo, ajusta el signo y convierte 'n' a positivo.
// Linea 80 - Convierte el número en caracteres y los almacena en la cadena.

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}
/* 
int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(1));
}
 */