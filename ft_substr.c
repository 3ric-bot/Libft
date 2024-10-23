/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 13:00:03 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	ptr_len;

	if (!s)
		return (0);
	ptr_len = 0;
	while (start < ft_strlen(s) && (ptr_len < len && s[start + ptr_len]))
		ptr_len++;
	ptr = malloc(sizeof(char) * (ptr_len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str = "Hello, world!";
    char *result;

    // Test Case 1: Normal case
    result = ft_substr(str, 7, 5);
    printf("Test Case 1: '%s'\n", result); // Expected: 'world'
    free(result);

    // Test Case 2: Starting at the beginning
    result = ft_substr(str, 0, 5);
    printf("Test Case 2: '%s'\n", result); // Expected: 'Hello'
    free(result);

    // Test Case 3: Length exceeds string length
    result = ft_substr(str, 0, 50);
    printf("Test Case 3: '%s'\n", result); // Expected: 'Hello, world!'
    free(result);

    // Test Case 4: Starting beyond string length
    result = ft_substr(str, 20, 5);
    printf("Test Case 4: '%s'\n", result); // Expected: ''
    free(result);

    // Test Case 5: Null string
    result = ft_substr(NULL, 0, 5);
    printf("Test Case 5: '%s'\n", result); // Expected: '(null)'
    
    return 0;
}
