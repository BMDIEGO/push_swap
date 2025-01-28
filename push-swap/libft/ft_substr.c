/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:44 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:37:37 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que crea una nueva subcadena de 's' comenzando desde 'start' con una longitud de 'len'.
// Retorna un puntero a la subcadena o NULL si hay un error.
// Linea 27 - Verifica si 's' es NULL o si 'start' es mayor o igual que la longitud de 's'.
// Linea 28 - Retorna una cadena vacía en caso de que 's' sea NULL o 'start' sea inválido.
// Linea 29 - Ajusta 'len' si la longitud restante de 's' a partir de 'start' es menor que 'len'.
// Linea 31 - Reserva memoria para la nueva subcadena, incluyendo el carácter nulo al final.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* 
int main()
{
	char *s = "Hola Mundo";
	printf("%s\n", ft_substr(s, 5, 5));
	printf("%s\n", ft_substr(s, 5, 10));
	printf("%s\n", ft_substr(s, 5, 0));
	printf("%s\n", ft_substr(s, 0, 5));
	printf("%s\n", ft_substr(s, 0, 0));
	printf("%s\n", ft_substr(s, 0, 10));
	printf("%s\n", ft_substr(s, 10, 5));
	printf("%s\n", ft_substr(s, 10, 0));
	printf("%s\n", ft_substr(s, 10, 10));
} */