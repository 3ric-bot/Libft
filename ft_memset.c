/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:34:18 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = c;
	return (b);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char buffer[50];

    // Initialize the buffer with some characters
    for (int i = 0; i < 49; i++)
    {
        buffer[i] = 'A' + (i % 26); // Fill with letters A-Z
    }
    buffer[49] = '\0'; // Null-terminate the string

    printf("Before memset: %s\n", buffer);
    
    // Use ft_memset to set the first 10 bytes to 'X'
    ft_memset(buffer, 'X', 1);
    
    printf("After memset: %s\n", buffer);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_memset.c
*/