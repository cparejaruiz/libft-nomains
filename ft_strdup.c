/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:30:40 by carmen            #+#    #+#             */
/*   Updated: 2024/10/22 22:36:04 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
