/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:28:32 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:30:44 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long n)
{
	long	abs_val;
	int		len;

	len = 1;
	if (n > 0)
		abs_val = n;
	else
		abs_val = -n;
	while (abs_val > 9)
	{
		abs_val /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	long	new_n;
	int		len;
	char	*str;
	int		i;

	new_n = (long)n;
	len = ft_intlen(new_n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (new_n < 0)
	{
		str[i++] = '-';
		new_n *= -1;
	}
	str[len] = '\0';
	while (--len >= i)
	{
		str[len] = (new_n % 10) + '0';
		new_n /= 10;
	}
	return (str);
}

// converts the int into a string 
// need to find out the lengt of the int so i can allocate memory
// int is 4 bytes char is 1
//
// l.20 Start at one since if im working with n from 0 to 9 it 
//will count as false and not enter the loop, but it still has 1 digit
// l.21/ l.24 get a positive n, if negative multiply by '-'
// l.25/ l.28 Remouve last digit and add to len
// l.30/ l.31 If n is negative add 1 to len to acount the sign