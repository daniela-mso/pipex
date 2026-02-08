/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:22:20 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:33:19 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;
	size_t	minlen;

	len1 = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	if (len1 < len2)
		minlen = len1;
	else
		minlen = len2;
	if (minlen > n)
		minlen = n;
	return (ft_memcmp(s1, s2, minlen));
}
//compares only the first (at most) n bytes of s1 and s2
//eturn an integer less than, equal to, or greater than zero 
// if s1 (or the first n bytes thereof) is found
// l.20 in ternary: size_t minlen = len1 < len2 ? len1 : len2;
