/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:40:38 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	if ((!haystack || !needle) && len == 0)
		return (0);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && \
			haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h> // For comparison with the original strnstr function
#include "libft.h"  // Include your library header

int main(void)
{
    // Test cases
    const char *haystack1 = "Hello, world!";
    const char *needle1 = "world";
    const char *haystack2 = "Hello, world!";
    const char *needle2 = "42";
    const char *haystack3 = "Hello, world!";
    const char *needle3 = "";
    const char *haystack4 = "";
    const char *needle4 = "Hello";
    
    // Test case 1: Needle found
    char *result1 = ft_strnstr(haystack1, needle1, 15);
    printf("ft_strnstr: '%s' -> '%s'\n", needle1, result1 ? result1 : "NULL");
    
    // Test case 2: Needle not found
    char *result2 = ft_strnstr(haystack2, needle2, 15);
    printf("ft_strnstr: '%s' -> '%s'\n", needle2, result2 ? result2 : "NULL");
    
    // Test case 3: Empty needle
    char *result3 = ft_strnstr(haystack3, needle3, 15);
    printf("ft_strnstr: '%s' -> '%s'\n", needle3, result3 ? result3 : "NULL");

    // Test case 4: Empty haystack
    char *result4 = ft_strnstr(haystack4, needle4, 0);
    printf("ft_strnstr: '%s' -> '%s'\n", needle4, result4 ? result4 : "NULL");
}

*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strnstr.c
*/