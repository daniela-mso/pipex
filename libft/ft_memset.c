/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:47:26 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:08 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	fill_byte;
	size_t			i;

	a = s;
	fill_byte = c;
	i = 0;
	while (i < n)
	{
		a[i] = fill_byte;
		i++;
	}
	return (s);
}

// memset - fill memory with a constant byte 