/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:09:29 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dst[50]; // Make sure the destination is large enough to hold the source
    char dst2[50]; // For comparison with the standard memcpy

    // Initialize dst with a different string to see if it gets overwritten
    strcpy(dst, "Initial string");
    strcpy(dst2, "Initial string");

    // Print original strings
    printf("Before ft_memcpy:\n");
    printf("dst: %s\n", dst);
    printf("src: %s\n", src);

    // Use ft_memcpy to copy src to dst
    ft_memcpy(dst, src, strlen(src) + 1); // +1 to copy the null terminator
    memcpy(dst2, src, strlen(src) + 1); // Standard memcpy for comparison

    // Print modified strings
    printf("\nAfter ft_memcpy:\n");
    printf("dst (ft_memcpy): %s\n", dst);
    printf("dst2 (memcpy): %s\n", dst2);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_memcpy.c
*/