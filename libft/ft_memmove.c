/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:49:13 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:02 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	long long	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		i = n ;
		while (--i >= 0)
			((char *)dst)[i] = ((const char *)src)[i];
	}
	else
	{
		i = -1;
		while (++i < (long long)n)
			((char *)dst)[i] = ((const char *)src)[i];
	}
	return (dst);
}

//The memmove() function copies n bytes from memory area src to 
// memory area dest. 
// The memory areas may overlap: copying takes place as though the 
// bytes in src are first copied into
//       a temporary array that does not overlap src or 
// dest, and the bytes are 
// 			then copied from the temporary array to dest.
//
//RETURN VALUE
//       The memmove() function returns a pointer to dest.