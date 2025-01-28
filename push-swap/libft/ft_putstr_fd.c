/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:28:00 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:33:21 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que escribe la cadena de caracteres 's' en el file descriptor 'fd'.
// Si 's' es NULL, no hace nada.
// Linea 22 - Escribe la cadena completa en el file descriptor 'fd'.

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
/* 
int main()
{
	ft_putstr_fd("Hola Mundo", 1);
} */