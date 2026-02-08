/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:43:48 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:32:22 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

//     Write the string s on the file descriptor fd.
// PARAMETERS
//     s: string to write
//     fd: file descriptor on which to write
// RETURN VALUES
//     ft_putstr_fd() does not return anything