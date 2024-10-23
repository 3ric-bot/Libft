/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:07:16 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	if (!s1 && !s2)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int safe_memcmp(const void *s1, const void *s2, size_t n) {
    if (s1 == NULL && s2 == NULL) return 0; // Both NULL
    if (s1 == NULL) return -1;              // s1 is NULL, s2 is not
    if (s2 == NULL) return 1;               // s2 is NULL, s1 is not
    return ft_memcmp(s1, s2, n);
}

int main(void) {
    // Test cases for ft_memcmp
    char *s1 = "Hello, World!";
    char *s2 = "Hello, World!";
    char *s3 = "Hello, World!";
    char *s4 = NULL;  // Example with NULL pointer
    char *s5 = "Goodbye!";

    // Test case 1: identical strings
    printf("Test Case 1: %d\n", safe_memcmp(s1, s2, 13)); // Expected output: 0

    // Test case 2: different strings
    printf("Test Case 2: %d\n", safe_memcmp(s1, s3, 13)); // Expected output: 0

    // Test case 3: compare with NULL pointer (both NULL)
    printf("Test Case 3: %d\n", safe_memcmp(s4, s4, 0));   // Expected output: 0

    // Test case 4: compare part of strings
    printf("Test Case 4: %d\n", safe_memcmp(s1, s5, 8)); // Expected output: 1

    // Test case 5: compare first 5 characters
    printf("Test Case 5: %d\n", safe_memcmp(s1, s2, 5)); // Expected output: 0

    // Test case 6: compare s1 and NULL (should handle NULL pointer)
    printf("Test Case 6: %d\n", safe_memcmp(s1, s4, 5)); // Expected output: 1

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_memcmp.c
*/