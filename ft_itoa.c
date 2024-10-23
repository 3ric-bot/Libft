/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:17:56 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_nbrlen(int n, int *neg)
{
	int	i;

	i = 0;
	*neg = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		*neg *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= ((len - 1) / 2))
	{
		tmp = str[len - i];
		str[len - i] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		neg;

	i = 0;
	str = malloc(sizeof(char) * (ft_nbrlen(n, &neg) + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i++] = ((n % 10) * neg) + '0';
		n /= 10;
	}
	if (neg == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int numbers[] = {0, 42, -42, 123456, -123456, INT_MIN, INT_MAX};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        char *result = ft_itoa(numbers[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", numbers[i], result);
            free(result); // Don't forget to free the allocated memory
        }
        else
        {
            printf("ft_itoa(%d) returned NULL\n", numbers[i]);
        }
    }

    return 0;
}
*/
//gcc -Wall -Wextra -Werror -o file ft_itoa.c ft_strlen.c