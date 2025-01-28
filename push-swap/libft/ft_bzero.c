/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:26 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/02 16:52:50 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// Función que pone a cero los primeros 'n' bytes del área de memoria apuntada por 's'.
// Utiliza la función ft_memset para llenar esa área de memoria con ceros.

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* int main()
{
	char str[] = "Hola";
	ft_bzero(str, 5);
	printf("%s", str);
} */