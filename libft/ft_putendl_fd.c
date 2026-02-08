/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:45:34 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 09:38:41 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

//     ft_putendl_fd() writes the string s, followed by
// 	 a newline, on the file descriptor fd
// PARAMETERS
//     s: string to write
//     fd: the file descriptor on which to write
// RETURN VALUES
//     ft_putendl_fd() does not return anything