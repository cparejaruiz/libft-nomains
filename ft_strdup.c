/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:30:40 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:36:22 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The `ft_strdup` function allocates sufficient 
 * memory for a copy of the string `str`,
 * does the copy, and returns a pointer to it.
 *
 * The pointer may subsequently be used as an argument to the function `free`.
 *
 * @param str The string to be copied.
 * @return A pointer to the newly allocated string, 
 * or `NULL` if the allocation failed.
 */

char	*ft_strdup(char const *str)
{
	int		i;
	char	*s1;

	i = 0;
	while (str[i] != '\0')
		i++;
	s1 = (char *) malloc((i + 1) * sizeof(char));
	if (s1 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s1[i] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
