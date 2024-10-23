/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 12:38:59 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[20] = "Hello, World!";
	
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str + 7, 6); // Set 6 bytes to 0 starting from the 8th character
	printf("After ft_bzero: %s\n", str);
	
	// Checking the result using a loop to display non-printable characters
	for (int i = 0; i < 10; i++)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
	}
	printf("\n");

	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_bzero.c ft_memset.c