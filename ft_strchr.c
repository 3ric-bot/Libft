/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:10:25 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str = "Hello, World!";
    char c1 = 'W';
    char c2 = 'o';
    char c3 = 'z'; // Character not in the string
	char c4 = 'H'; // Character not in the string
    char c5 = '\0'; // Null terminator

    char *result1 = ft_strchr(str, c1);
    char *result2 = ft_strchr(str, c2);
    char *result3 = ft_strchr(str, c3);
    char *result4 = ft_strchr(str, c4);
	char *result5 = ft_strchr(str, c5);

    printf("Searching for '%c' in \"%s\": %s\n", c1, str, result1 ? result1 :
    "not found");
    printf("Searching for '%c' in \"%s\": %s\n", c2, str, result2 ? result2 :
    "not found");
    printf("Searching for '%c' in \"%s\": %s\n", c3, str, result3 ? result3 :
    "not found");
	printf("Searching for '%c' in \"%s\": %s\n", c4, str, result4 ? result4 :
    "not found");
    printf("Searching null terminator in \"%s\": %s\n", str, result5 ? result5 :
    "not found");

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strchr.c
*/