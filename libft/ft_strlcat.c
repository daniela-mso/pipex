/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 08:08:04 by daniela           #+#    #+#             */
/*   Updated: 2025/10/02 16:36:37 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i + 1 < size)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}

// concatenate strings respectively. take the full size of the buffer 
// (not just the length) 
// and guarantee to NUL-terminate
// the result (as long as size is larger than 0 or, in the case of strlcat(),
//  as long as there is at least one byte free in dst).
// Note that a byte for the NUL should be included in size. trings.
// strlcat() both src and dst must be NUL-terminated.

// The strlcat() function appends the NUL-terminated string src 
// to the end of dst.
//   It will append at most size - strlen(dst) - 1 bytes, 
// NUL-terminating the result.

//   RETURN VALUE
// return the total length of the string they tried to create. 
// that means the initial length of dst plus the length of src.
// however, that if strlcat() traverses size characters without 
// finding a NUL, 
// the length of the string is considered to be size and the 
// destination string will
//      not be NUL-terminated (since there was no space for the NUL).  
// 	 This keeps strlcat() from running off the end of a string. 
