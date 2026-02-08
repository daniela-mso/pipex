/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:20:51 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:24 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	if (!little)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while ((i + j) < len && big[i + j] == little[j] && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}

//The strnstr() function locates the first occurrence of the null-terminated
//  string little in the string big, 
// where not more than len characters are searched.  Characters that appear 
// after a ‘\0’ character are not searched. 
//  Since the strnstr() function is a FreeBSD specific API, it should only 
// be used when portability is not a concern.
//
// If little is an empty string, big is returned; if little occurs nowhere 
// in big, NULL is returned; 
// otherwise a pointer to the first character of the first occurrence of 
// little is returned