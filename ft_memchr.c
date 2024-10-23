/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:51:57 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "Hello, world!";
    int c = 'o';
    size_t n = 13; // Length of the string

    // Using the standard library function
    char *standard_result = memchr(str, c, n);
    // Using your ft_memchr function
    char *ft_result = ft_memchr(str, c, n);

    // Printing results
    if (standard_result) {
        printf("Standard memchr found '%c' at: %s\n", c, standard_result);
    } else {
        printf("Standard memchr did not find '%c'\n", c);
    }

    if (ft_result) {
        printf("ft_memchr found '%c' at: %s\n", c, ft_result);
    } else {
        printf("ft_memchr did not find '%c'\n", c);
    }

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_memchr.c
*/