/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:18:43 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 15:26:16 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pointer;

	pointer = *lst;
	if (pointer == NULL)
	{
		*lst = new;
		return ;
	}
	while (pointer->next != NULL)
		pointer = pointer->next;
	pointer->next = new;
}

// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be
// added to the list.
// Return value None
// External functs. None
// Description Adds the node ’new’ at the end of the list
//
// l.22 directly set new as the first (and only) element
// l.27Traverse the list until we find the last node (where next is NULL)
// l.28 Move pointer forward one node at a time
// l.30 Attach the new node at the end by linking it to the last node’s next