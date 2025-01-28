/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:29:05 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:55:14 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que crea un nuevo nodo para la lista enlazada, inicializando su contenido y el puntero siguiente.
// Devuelve un puntero al nuevo nodo o NULL si la asignación de memoria falla.
// Linea 26 - Asigna memoria para un nuevo nodo.
// Linea 27 - Verifica si la asignación de memoria falló.
// Linea 29 - Inicializa el contenido del nodo con 'content'.
// Linea 30 - Inicializa el puntero siguiente como NULL (el nuevo nodo será el último).

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* 
int main()
{
	t_list *list = ft_lstnew("Hola");
	t_list *list2 = ft_lstnew("Mundo");
	list->next = list2;
	printf("%s\n", (char *)list->content);
	printf("%s\n", (char *)list2->content);
} */