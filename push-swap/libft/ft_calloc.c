/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:13:32 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/02 16:54:13 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que asigna memoria para un array de 'count' elementos de 'size' bytes cada uno,
// inicializando la memoria asignada a cero.
// Linea 22 - Asigna memoria para 'count' elementos de tamaño 'size'.
// Linea 23 - Si malloc falla y no asigna memoria, devuelve NULL.
// Linea 30 - Inicializa la memoria asignada a cero usando ft_bzero.

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
/* int main()
{
	void *ptr = ft_calloc(10, 4);
	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("Memory allocated successfully\n");
	free(ptr);
	return (0);
} */