/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 12:58:19 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_scan(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i++;
	}
	return (i + 1);
}

static int	ft_reverse_scan(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) -1 ;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = ft_scan(s1, set);
	end = ft_reverse_scan(s1, set);
	if (end - start + 1 < 0)
		return (ft_calloc(1, sizeof(char)));
	ptr = ft_substr(s1, start - 1, end - start + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char *str1 = "   Hello, World!   ";
    char *set1 = " "; // Remove the spaces
    char *result1 = ft_strtrim(str1, set1);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", str1, result1);
    free(result1);

    char *str2 = "!!!Hello, World!!!";
    char *set2 = "!"; // Remove the exclamation marks
    char *result2 = ft_strtrim(str2, set2);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", str2, result2);
    free(result2);

    char *str3 = "****Hello****";
    char *set3 = "*"; // Remove the Asterisks
    char *result3 = ft_strtrim(str3, set3);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", str3, result3);
    free(result3);

    char *str4 = "NoTrimHere";
    char *set4 = " "; // noting to remove string remains unchanged
    char *result4 = ft_strtrim(str4, set4);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", str4, result4);
    free(result4);

    char *str5 = "";
    char *set5 = " "; // no input ,the result is empty
    char *result5 = ft_strtrim(str5, set5);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", str5, result5);
    free(result5);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strtrim.c ft_strlen.c ft_calloc.c 
	ft_substr.c ft_bzero.c ft_memset.c
*/