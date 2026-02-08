/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:28:02 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:13 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	i = 0;
	new_s = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (new_s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

//     Apply the function 'f' to each characters in the string 's' 
// 	to create a new string (with malloc(3)) resulting of the 
// 	successive applications of 'f'.
// PARAMETERS
//     s: string over which to iterate
//     f: function to apply to each character
// RETURN VALUES
//     ft_strmapi() returns a new string resulting of the successive
// 	 applications of 'f'; NULL if the memory allocations failed.