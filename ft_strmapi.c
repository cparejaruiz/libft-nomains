/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:04:48 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:24:10 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function `f` to each character of the string `s` to create a new
 * string resulting from successive applications of `f`.
 *
 * @param s The string to map.
 * @param f The function to apply to each character.
 * @return The new string created by applying `f` to each character of `s`.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	int		j;
	char	*string;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	string = (char *) malloc ((len +1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[i] != '\0')
	{
		string[j] = f(i, s[i]);
		i++;
		j++;
	}
	string[j] = '\0';
	return (string);
}
