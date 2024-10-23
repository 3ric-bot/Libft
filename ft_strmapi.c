/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:14:53 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s)
		return (0);
	if (!f)
		return (0);
	ptr = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

char to_upper(unsigned int index, char c) {
    (void)index; // Suppress unused parameter warning
    return (char)toupper(c);
}

int main() {
    const char *str = "hello world";
    char *result;

    result = ft_strmapi(str, to_upper);
    if (result) {
        printf("Original: %s\n", str);
        printf("Mapped: %s\n", result);
        free(result);  // Free the allocated memory
    } else {
        printf("Error in ft_strmapi.\n");
    }

    return 0;
}

/*
	gcc -Wall -Wextra -Werror -o file ft_strmapi.c ft_strlen.c
*/