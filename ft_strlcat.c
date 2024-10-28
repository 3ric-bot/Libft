/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/24 14:39:14 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!dest || !src) && size == 0)
		return (0);
	while (dest[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char dest1[30] = "Hello, ";
    char src1[] = "World!";
    size_t size1 = sizeof(dest1);
    size_t result1 = ft_strlcat(dest1, src1, size1);
    printf("Test 1: dest = \"%s\", result = %zu\n", dest1, result1);
    // Expect "Hello, World!"

    char dest2[30] = "Goodbye, ";
    char src2[] = "Earth!";
    size_t size2 = 10; // Size smaller than the total length
    size_t result2 = ft_strlcat(dest2, src2, size2);
    printf("Test 2: dest = \"%s\", result = %zu\n", dest2, result2);
    // Expect "Goodbye, E"

    char dest3[30] = "";
    char src3[] = "Testing";
    size_t size3 = sizeof(dest3);
    size_t result3 = ft_strlcat(dest3, src3, size3);
    printf("Test 3: dest = \"%s\", result = %zu\n", dest3, result3);
    // Expect "Testing"

    char dest4[30] = "Buffer";
    char src4[] = "Overflow";
    size_t size4 = 6; // Size equal to the length of dest
    size_t result4 = ft_strlcat(dest4, src4, size4);
    printf("Test 4: dest = \"%s\", result = %zu\n", dest4, result4);
    // Expect "Buffer"

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strlcat.c
*/