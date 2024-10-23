/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:11:51 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    char dest2[20];
    size_t size;

    // Test case 1
    size = 20; // Size larger than src
    ft_strlcpy(dest, src, size);
    printf("ft_strlcpy with size %zu: '%s' (returned: %zu)\n", size, dest,
	ft_strlcpy(dest, src, size));
    printf("Expected: '%s'\n\n", strncpy(dest2, src, size));

    // Test case 2
    size = 5; // Size smaller than src
    ft_strlcpy(dest, src, size);
    printf("ft_strlcpy with size %zu: '%s' (returned: %zu)\n", size, dest,
	ft_strlcpy(dest, src, size));
    printf("Expected: '%s'\n\n", strncpy(dest2, src, size));

    // Test case 3
    size = 0; // Size is 0
    printf("ft_strlcpy with size %zu: (returned: %zu)\n", size,
	ft_strlcpy(dest, src, size));
    printf("dest remains: '%s'\n\n", dest);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strlcpy.c
*/