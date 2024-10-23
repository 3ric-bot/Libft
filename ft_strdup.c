/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 17:18:14 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	ptr[len] = '\0';
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char *original = "Hello, World!";
    char *duplicate;

    // Call ft_strdup to duplicate the original string
    duplicate = ft_strdup(original);

    // Check if the duplication was successful
    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    // Print the original and duplicated strings
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Free the duplicated string to prevent memory leaks
    free(duplicate);

    return (0);
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strdup.c ft_memcpy.c ft_strlen.c
*/