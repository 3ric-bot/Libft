/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 12:51:13 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c1 = 'A';
	char c2 = '1';
	char c3 = '%';
	char c4 = 'b';

	printf("Is '%c' alphanumeric? %d\n", c1, ft_isalnum(c1)); //Expected 1
	printf("Is '%c' alphanumeric? %d\n", c2, ft_isalnum(c2)); //Expected 1
	printf("Is '%c' alphanumeric? %d\n", c3, ft_isalnum(c3)); //Expected 0
	printf("Is '%c' alphanumeric? %d\n", c4, ft_isalnum(c4)); //Expected 1

	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_isalnum.c ft_isalpha.c ft_isdigit.c