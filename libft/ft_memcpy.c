/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:54:24 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:31:54 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*new_src;
	char		*new_dest;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	new_src = src;
	new_dest = dest;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}

//copies n bytes from memory area src to memory area dest.  
// The memory areas must not overlap.  Use memmove(3) if the
//  memory areas do overlap.
//
//RETURN VALUE
//      The memcpy() function returns a pointer to dest.
// return dest instead of new_dest since if im initializing 
// new_dest to dest it means the 
// poiters are the same so its the same thing (same thing for src)