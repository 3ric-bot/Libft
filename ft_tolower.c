/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/23 13:44:56 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "HELLO word! 42 is GREAT!";
    int i = 0;

    printf("Original: %s\n", str);
    printf("Converted: ");

    while (str[i])
    {
        putchar(ft_tolower(str[i]));
        i++;
    }
    putchar('\n');

    return 0;
}

*/
/*
	gcc -Wall -Wextra -Werror -o file ft_tolower.c
*/