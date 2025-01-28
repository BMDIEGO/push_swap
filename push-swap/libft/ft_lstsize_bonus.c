/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrajo <dbarrajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:29:28 by dbarrajo          #+#    #+#             */
/*   Updated: 2024/10/07 16:56:20 by dbarrajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que calcula y devuelve el número de elementos (nodos) en la lista enlazada 'lst'.

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/* 
int main()
{
	t_list *lst;
	lst = ft_lstnew("Hola");
	lst = ft_lstadd_back(&lst, ft_lstnew("Mundo"));
	lst = ft_lstadd_back(&lst, ft_lstnew("Buenas"));
	printf("%d\n", ft_lstsize(lst));
} */