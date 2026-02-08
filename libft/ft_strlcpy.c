/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:53:43 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:03 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// copy strings . takes the full size of the buffer
// 	(not just the length) and guarantee to NUL-terminate the result
// 	  Note that a byte for the NUL should be included in size.  
//  src must be 
// 	 NUL-terminated

//      The strlcpy() function copies up to size - 1 characters from 
// the NUL-terminated string src to dst, 
// 	 NUL-terminating the result

// RETURN VALUES
//  	return the total length of the string they tried to create. 
//  For strlcpy() that means the length of src.  