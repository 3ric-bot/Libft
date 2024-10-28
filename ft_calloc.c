/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/25 18:09:23 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	*arr;
	size_t	count = 5;
	size_t	size = sizeof(int);
	size_t	i;

	// Call ft_calloc to allocate memory for an array of 5 integers
	arr = (int *)ft_calloc(count, size);
	if (!arr)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	// Check if the allocated memory is set to zero
	for (i = 0; i < count; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);

	// Free allocated memory
	free(arr);

	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_calloc.c ft_bzero.c ft_memset.c