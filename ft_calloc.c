/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmen <carmen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:16:22 by carmen            #+#    #+#             */
/*   Updated: 2024/11/05 20:27:08 by carmen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array of `num` elements of `size` bytes each and
 * returns a pointer to the allocated memory. The memory is set to zero.
 *
 * The `ft_calloc` function allocates memory for an array of `num` elements of
 * `size` bytes each and returns a pointer to the allocated memory. The memory
 * is set to zero. If `num` or `size` is 0, the `ft_calloc` function returns
 * `NULL`.
 *
 * @param num The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory, or `NULL` if the allocation fails.
 */

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL )
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}
