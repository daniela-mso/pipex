/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:42:39 by danielad          #+#    #+#             */
/*   Updated: 2025/10/23 11:49:53 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(const char *str, char c)
{
	int		index;
	int		nb_str;
	int		inside;

	index = -1;
	nb_str = 0;
	inside = 1;
	while (str[++index] != '\0')
	{
		if (str[index] != c && inside == 1)
		{
			inside = 0;
			nb_str++;
		}
		else if (str[index] == c)
			inside = 1;
	}
	return (nb_str);
}

static char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static void	initiate_var(size_t *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

static void	*free_all(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**splited;
	size_t	i;
	int		j;
	int		s_word;

	initiate_var(&i, &j, &s_word);
	splited = ft_calloc((count_splits(str, c) + 1), sizeof(char *));
	if (splited == NULL)
		return (NULL);
	while (i <= (size_t)ft_strlen(str))
	{
		if (str[i] != c && s_word < 0)
			s_word = i;
		else if ((str[i] == c || i == (size_t)ft_strlen(str)) && s_word >= 0)
		{
			splited[j] = fill_word(str, s_word, i);
			if (!(splited[j]))
				return (free_all(splited, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	splited[j] = NULL;
	return (splited);
}
