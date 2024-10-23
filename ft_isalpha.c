/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:58:26 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 90 || c < 65) && (c < 97 || c > 122))
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char test_char1 = 'A';
	char test_char2 = 'z';
	char test_char3 = '1';
	char test_char4 = '*';
	char test_char5 = 'a';
	char test_char6 = 'b';

	printf("Test with '%c': %d\n", test_char1, ft_isalpha(test_char1)); // Ans 1
	printf("Test with '%c': %d\n", test_char2, ft_isalpha(test_char2)); // Ans 1
	printf("Test with '%c': %d\n", test_char3, ft_isalpha(test_char3)); // Ans 0
	printf("Test with '%c': %d\n", test_char4, ft_isalpha(test_char4)); // Ans 0
	printf("Test with '%c': %d\n", test_char5, ft_isalpha(test_char5)); // Ans 1
	printf("Test with '%c': %d\n", test_char6, ft_isalpha(test_char6)); // Ans 1

	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_isalpha.c