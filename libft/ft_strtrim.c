/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:14:57 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 09:44:37 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	start = 0;
	end = ft_strlen(s1) - 1;
	len = 0;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[start])
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	while (end >= start)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}

//     Allocate (with malloc(3)) and returns a copy of s1, 
// 	without the characters specified in set at the beginning 
// 	and the end of s1.
// PARAMETERS
//     s1: string to trim
//     set: characters to trim
// RETURN VALUES
//     ft_strtrim() returns a trimmed copy of s1; NULL if the memory 
// 	allocation failed.