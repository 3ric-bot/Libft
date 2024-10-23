/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 13:09:46 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Hello, World! 123 	test test test!.";
    char result[sizeof(str)];
    int i = 0;

    while (str[i] != '\0')
    {
        result[i] = ft_toupper(str[i]);
        i++;
    }
    result[i] = '\0';  // Null-terminate the result string

    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", result);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_toupper.c
*/