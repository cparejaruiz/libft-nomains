/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:04:48 by carmen            #+#    #+#             */
/*   Updated: 2024/10/16 12:08:05 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
