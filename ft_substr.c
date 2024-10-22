/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:21:54 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 22:36:59 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		slen ;
	char		*substring;

	i = 0;
	j = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (strdup(""));
	if (len > slen - start)
		len = slen - start;
	substring = (char *) malloc ((len +1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substring[j] = s[start + i];
		i++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}
