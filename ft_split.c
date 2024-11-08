/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:45:55 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:51:38 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Splits a string into an array of strings using the specified delimiter.
 *
 * The `ft_split` function splits the string 
 * `s` into an array of strings using the
 * specified delimiter `c`. The function returns an array of strings obtained by
 * splitting `s` using the character `c` as a delimiter. The array must be ended
 * by a `NULL` pointer.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of strings obtained by splitting 
 * `s` using the character `c` as a delimiter.
 */

static int	count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void	free_memory(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

static char	*allocate_word(const char **s, char c)
{
	int		len;
	char	*word;
	int		j;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = (*s)[j];
		j++;
	}
	word[len] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		nwords;
	char	**result;

	i = 0;
	nwords = count_words(s, c);
	result = (char **)malloc((nwords + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < nwords)
	{
		while (*s && *s == c)
			s++;
		result[i] = allocate_word(&s, c);
		if (!result[i])
		{
			free_memory(result, i - 1);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
