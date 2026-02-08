/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:52:38 by danielad          #+#    #+#             */
/*   Updated: 2025/10/22 14:03:54 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*substr;
	unsigned int	len_of_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_of_s = (unsigned int)ft_strlen(s);
	if (start > len_of_s || len_of_s == 0)
		return (ft_strdup(""));
	if (len_of_s - start < len)
		len = len_of_s - start;
	substr = ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
//     ft_substr -- extract a substring from a string
// DESCRIPTION
//     Allocate (with malloc(3)) and return a new string from the string s.
//     This new string starts at index 'start' and has a maximum size of 'len'.
// PARAMETERS
//     s: string from which to extract the new string
//     start: start index of the new string in the string 's'
//     len: maximum size of the new string
// RETURN VALUES
//     ft_substr() returns the new string; NULL if the memory allocation failed.