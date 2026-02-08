/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:31:38 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:56 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	*n1;
	const char	*n2;
	int			i;
	char		*str;

	n1 = s1;
	n2 = s2;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (*n1)
	{
		str[++i] = *n1;
		n1++;
	}
	while (*n2)
	{
		str[++i] = *n2;
		n2++;
	}
	str[i + 1] = '\0';
	return (str);
}
