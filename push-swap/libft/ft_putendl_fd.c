/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:28:34 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:31:59 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribe la cadena de caracteres 's' seguida de un salto de línea ('\n') en el file descriptor 'fd'.
// Si 's' es NULL, no hace nada.
// Linea 24 - Escribe la cadena 's' en el file descriptor 'fd'.
// Linea 25 - Escribe un salto de línea en el file descriptor 'fd'.

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
/* 
int main()
{
	ft_putendl_fd("Hola Mundo", 1);
} */