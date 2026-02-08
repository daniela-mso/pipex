/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:12:43 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:29:55 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int n, int size)
{
	void	*res;

	res = malloc(n * size);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, size * n);
	return (res);
}

// Allocates memory for an array of 'n' elelments, each of 'size' bytes 
// and initializes it to zero. aka it clears the memory
// l.21 Allocates the memory
// l.24 Clears the memory by setting it to zero