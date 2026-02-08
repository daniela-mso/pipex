/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:56:11 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:37 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char) c;
	if (cc == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (ft_memchr(s, cc, ft_strlen(s)));
}

//returns a pointer to the first occurrence of the character c 
// in the string s. 
// return a pointer to the matched character or NULL if the 
// character is not found.  
// The terminating null byte is considered partof the string,
//  so that if c is specified as '\0',
//  these functions return a pointer to the terminator.