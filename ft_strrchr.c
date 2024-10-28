/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 13:48:21 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str1 = "Hello, World!";
    const char *str2 = "42 is the answer.";
    const char *str3 = "Testing ft_strrchr function.";
    const char *str4 = ""; // Testing with an empty string

    char c1 = 'o';
    char c2 = '4';
    char c3 = 'x'; // Character not in string
    char c4 = '\0'; // Testing with null character

    // Test case 1
    char *result1 = ft_strrchr(str1, c1);
    printf("result1 = (%s, %c) = %s\n", str1, c1, result1 ? result1 : "NULL");

    // Test case 2
    char *result2 = ft_strrchr(str2, c2);
    printf("result2 = (%s, %c) = %s\n", str2, c2, result2 ? result2 : "NULL");

    // Test case 3
    char *result3 = ft_strrchr(str3, c3);
    printf("result3 = (%s, %c) = %s\n", str3, c3, result3 ? result3 : "NULL");

    // Test case 4
    char *result4 = ft_strrchr(str4, c4);
    printf("result4 = (%s, '\\0') = %s\n", str4, result4 ? "Pointer to end" :
	"NULL");

    // Test case 5: Testing for character at the beginning
    char *result5 = ft_strrchr(str1, 'H');
    printf("result5 = (%s, 'H') = %s\n", str1, result5 ? result5 : "NULL");

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strrchr.c ft_strlen.c
*/