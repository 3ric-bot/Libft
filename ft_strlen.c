/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 17:43:22 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[100]; // Buffer to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read a string safely

    // Remove newline character if present
    size_t len = ft_strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0'; // Replace newline with null terminator

    printf("The length of the string is: %zu\n", ft_strlen(str));

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_strlen.c
*/