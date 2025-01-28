/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:30:04 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/03 17:41:15 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que añade un nuevo elemento 'new' al final de la lista enlazada 'lst'.
// Si la lista está vacía, 'new' se convierte en el primer elemento.
// Linea 22 - Puntero para almacenar el último elemento de la lista.
// Linea 27 - Si la lista está vacía, asigna 'new' como el primer elemento.
// Linea 31 - Obtiene el último elemento de la lista.
// Linea 32 - Asigna el nuevo elemento 'new' como el siguiente del último elemento.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}
/* 
int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hola");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
} */
