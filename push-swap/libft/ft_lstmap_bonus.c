/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:31:16 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/09 17:38:30 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que aplica la función 'f' a cada elemento de la lista enlazada 'lst',
// creando una nueva lista con los resultados. Si la asignación de memoria falla,
// se libera la nueva lista usando 'del'.
// Linea 33 - Crea un nuevo nodo aplicando 'f' al contenido del nodo actual.
// Linea 36 - Libera la nueva lista.
// Linea 39 - Agrega el nuevo nodo al final de la nueva lista.
// Linea 40 - Avanza al siguiente nodo de la lista original.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/* 
int main()
{
	t_list *lst = ft_lstnew("Hola");
	t_list *lst2 = ft_lstnew("Mundo");
	t_list *lst3 = ft_lstnew("!");
	t_list *lst4 = ft_lstnew("!");
	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	t_list *new = ft_lstmap(lst, ft_strdup, free);
	while (new)
	{
		printf("%s\n", new->content);
		new = new->next;
	}
} */