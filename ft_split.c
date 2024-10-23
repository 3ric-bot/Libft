/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 17:03:48 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static void	*ft_free(int i, char **array)
{
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
	return (NULL);
}

static char	**ft_split_handler(char const *s, char c, int i, int j)
{
	char	**array;
	char	*tmp;
	int		words;

	words = ft_count_word(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array[words] = 0;
	while (++i < words)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		tmp = ft_substr(s, 0, j);
		if (!tmp)
			return (ft_free(i - 1, array));
		array[i] = tmp;
		s = ft_strchr(s, c);
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_split_handler(s, c, -1, 0));
}

/*
#include <stdio.h>
#include "libft.h"

void print_split(char **result) {
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i, result[i]);
    }
}

int main(void) {
    const char *str = "Hello, this is a test string.";
    char delimiter = ' ';
    
    char **result = ft_split(str, delimiter);
    
    if (result) {
        print_split(result);
        
        // Free the allocated memory for the result
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    } else {
        printf("Failed to split the string.\n");
    }

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_split.c
	ft_putchar_fd.c ft_putstr_fd.c ft_substr.c ft_strchr.c ft_strlen.c
*/