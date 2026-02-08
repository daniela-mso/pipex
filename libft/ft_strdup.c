/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:54:14 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:47 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}

//     strdup -- save a copy of a string
// SYNOPSIS
//     char *strdup(const char *s1);
// DESCRIPTION
//     The strdup() function allocates sufficient
// 	 memory for a copy of the string s1, does the 
// 	 copy, and returns a pointer to it. The pointer may 
// 	 subsequently be used as an argument to the function free(3).
//     If insufficient memory is available, NULL is returned 
// 	and errno is set to ENOMEM.