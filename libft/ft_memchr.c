/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:05:56 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:31:21 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	cc;
	char	*str;

	i = 0;
	cc = (char)c;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

//     memchr -- locate byte in byte string
// DESCRIPTION
//     the memchr() function locates the first 
// 	occurence of c (convered to an unsigned char) in string s.
// RETURN VALUES
//     The memchr() function returns a pointer to the byte located, 
// 	or NULL if no such byte exists within n bytes.