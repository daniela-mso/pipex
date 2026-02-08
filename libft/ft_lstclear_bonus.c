/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:56:40 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:30:53 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !(*del))
		return ;
	while (*lst != NULL)
	{
		(*del)((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}

// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// Return value None
// External functs. free
// Description Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.
//
// l.20 Store the current head in a temporary pntr to iterate through the list
// l.25 Use the provided delete function to free the content inside the node
// l.26 Save the pointer to the next node before deleting the current one
// l.27 Free the current node itself
// l.28 Move the list pointer to the next node to continue clearing