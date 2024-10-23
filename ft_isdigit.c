/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:55:44 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '9' || c < '0' )
		return (0);
	return (1);
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int a = '5'; // Expected answer 1
	int b = 'a'; // Expected answer 0
	int c = '!'; // Expected answer 0

	if (ft_isdigit(a))
		printf("%c is a digit.\n", a);
	else
		printf("%c is not a digit.\n", a);
	
	if (ft_isdigit(b))
		printf("%c is a digit.\n", b);
	else
		printf("%c is not a digit.\n", b);

	if (ft_isdigit(c))
		printf("%c is a digit.\n", c);
	else
		printf("%c is not a digit.\n", c);
	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_isdigit.c