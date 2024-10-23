/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 12:56:53 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int test_chars[] = {0, -5, 32, 65, 128, 127}; // Test with various values
    int i;

    for (i = 0; i < 6; i++)
    {
        int result = ft_isascii(test_chars[i]);
        printf("ft_isascii(%d) = %d\n", test_chars[i], result);
    }
    return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_isascii.c