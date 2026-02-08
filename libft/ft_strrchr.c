/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:19:16 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:30 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

//The strrchr() function returns a pointer to the last
//  occurrence of the character c in the string s.
//return a pointer to the matched character or NULL if 
// the character is not found.  
// The terminating null byte is considered part of the 
// string, so that if c is specified as '\0', 
// these functions return a pointer to the terminator.