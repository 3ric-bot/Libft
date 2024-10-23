/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 17:32:03 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	tmp = ptr;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result;

    result = ft_strjoin(s1, s2);
    
    if (result)
    {
        printf("Result of ft_strjoin: %s\n", result);
        free(result); // Don't forget to free the allocated memory!
    }
    else
    {
        printf("ft_strjoin returned NULL\n");
    }

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strjoin.c ft_strlen.c
*/