/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:21:21 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				response;

	i = 0;
	response = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		response = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (response == 0)
			i++;
		else
			return (response);
	}
	return (response);
}

/*
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n); // Declare your function

int main(void)
{
    const char *str1;
    const char *str2;
    size_t n;
    int result;

    // Test case 1
    str1 = "Hello, World!";
    str2 = "Hello, World!";
    n = 13; // Compare the full string
    result = ft_strncmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\" with n=%zu: %d\n", str1, str2, n,
    result);

    // Test case 2
    str1 = "Hello, World!";
    str2 = "Hello, World!";
    n = 5; // Compare first 5 characters
    result = ft_strncmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\" with n=%zu: %d\n", str1, str2, n,
    result);

    // Test case 3
    str1 = "Hello";
    str2 = "Hello, World!";
    n = 10; // Compare longer s2
    result = ft_strncmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\" with n=%zu: %d\n", str1, str2, n,
    result);

    // Test case 4
    str1 = "Hello, World!";
    str2 = "Hello, Earth!";
    n = 7; // Compare first 7 characters
    result = ft_strncmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\" with n=%zu: %d\n", str1, str2, n,
    result);

    // Test case 5
    str1 = "Hello World!";
    str2 = "hello world!";
    n = 13; // Compare full string, case sensitivity
    result = ft_strncmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\" with n=%zu: %d\n", str1, str2, n,
    result);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strncmp.c
*/