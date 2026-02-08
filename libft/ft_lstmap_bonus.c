/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:07:28 by danielad          #+#    #+#             */
/*   Updated: 2025/10/21 14:20:09 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	void	*temp;

	if ((*f) == NULL || (*del) == NULL)
		return (NULL);
	new_list = NULL;
	new_element = NULL;
	while (lst != NULL)
	{
		temp = (*f)(lst->content);
		new_element = ft_lstnew(temp);
		if (new_element == NULL)
		{
			ft_lstclear(&new_list, del);
			del(temp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}

//creates a new list resulting from the application of f to each element
//  Iterate over the list 'lst' and apply the function 'f' to the content of 
//  each elements. Create a new list resulting of the successive applications 
//  of 'f'. The function 'del' is used to destroy the content of an element
//  if necessary.
// PARAMETERS
//     lst: pointer address to one element
//     f: the address of the function to apply
//     del: the address of the function that can delete an element's content
// RETURN VALUES
//     None 