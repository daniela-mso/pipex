/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:06:09 by danielad          #+#    #+#             */
/*   Updated: 2026/01/19 20:13:57 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *num)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(num[i]))
		i++;
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(num[i]))
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result * sign);
}

// l.8 Skip white spaces at the beginning
// l.10 Check if the current char is a sign
// l.18 Convert char to int and store it in result