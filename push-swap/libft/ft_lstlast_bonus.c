/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:29:39 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:53:50 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que devuelve el último nodo de la lista enlazada 'lst'.
// Si la lista está vacía, devuelve NULL.
// Linea 22 - Recorre la lista hasta encontrar el último nodo.
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Hola");
	lst->next = ft_lstnew("Mundo");
	lst->next->next = ft_lstnew("!");
	ft_lstlast(lst);
} */