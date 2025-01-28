/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:41:29 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:35:07 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que concatena las cadenas 's1' y 's2' en una nueva cadena.
// Retorna un puntero a la nueva cadena resultante, o NULL si falla la asignación de memoria.
// Linea 29 - Calcula la longitud total de la nueva cadena.
// Linea 30 - Asigna memoria para la nueva cadena, incluyendo espacio para el carácter nulo ('\0').

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		result[i] = s1[i];
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
/* 
int main()
{
	char *s1 = "Hola ";
	char *s2 = "Mundo";
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", strjoin(s1, s2));
} */