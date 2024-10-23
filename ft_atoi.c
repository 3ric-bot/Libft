/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 12:43:09 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_isspaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (&str[i]);
}

int	ft_atoi(const char *str)
{
	int			neg;
	long int	res;
	long int	last;

	str = ft_isspaces(str);
	neg = 1;
	res = 0;
	last = 0;
	if (*str == '-')
		neg = -neg;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (last > res && neg == 1)
			return (-1);
		else if (last > res && neg == 0)
			return (0);
		str++;
		last = res;
	}
	return (res * neg);
}

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *test1 = "   \t\n1234";		//Expected answer: 1234
	const char *test2 = "	-5678";			//Expected answer: -5678
	const char *test3 = "	+42";			//Expected answer: 42
	const char *test4 = "   +2147483647";	//Expected answer: 2147483647
	const char *test5 = "   -2147483648";	//Expected answer: -2147483648
	const char *test6 = "   42abc";			//Expected answer: 42
	const char *test7 = "   abc42";			//Expected answer: 0

	printf("Test 1: ft_atoi('%s') = %d\n", test1, ft_atoi(test1));
	printf("Test 2: ft_atoi('%s') = %d\n", test2, ft_atoi(test2));
	printf("Test 3: ft_atoi('%s') = %d\n", test3, ft_atoi(test3));
	printf("Test 4: ft_atoi('%s') = %d\n", test4, ft_atoi(test4));
	printf("Test 5: ft_atoi('%s') = %d\n", test5, ft_atoi(test5));
	printf("Test 6: ft_atoi('%s') = %d\n", test6, ft_atoi(test6));
	printf("Test 7: ft_atoi('%s') = %d\n", test7, ft_atoi(test7));

	return (0);
}
*/
//gcc -Wall -Wextra -Werror -o file ft_atoi.c