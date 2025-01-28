/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:26 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:46:46 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que libera la memoria de un nodo de la lista enlazada 'lst'.
// Llama a la función 'del' para eliminar el contenido del nodo antes de liberar la memoria del nodo en sí.
// Linea 24 - Llama a 'del' para liberar el contenido del nodo.
// Linea 25 - Libera la memoria del nodo.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Hola");
	ft_lstdelone(lst, free);
}*/