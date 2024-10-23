/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 13:27:58 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Goodbye, World!";
    
    // Test case 1: Non-overlapping memory areas
    printf("Before ft_memmove (non-over): str1 = %s, str2 = %s\n", str1, str2);
    ft_memmove(str2, str1, 13); // Move "Hello, World!" to str2
    printf("After ft_memmove (non-overlapping): str2 = %s\n", str2);
    
    // Reset str2
    strcpy(str2, "Goodbye, World!");

    // Test case 2: Overlapping memory areas
    printf("Before ft_memmove (overlapping): str1 = %s\n", str1);
    ft_memmove(str1 + 7, str1, 6); // Move "Hello," into "World!"
    printf("After ft_memmove (overlapping): str1 = %s\n", str1);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_memmove.c
*/