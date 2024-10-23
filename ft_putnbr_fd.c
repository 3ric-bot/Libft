/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:54:37 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

/*
#include <fcntl.h>   // For open()
#include <unistd.h>  // For write()
#include "libft.h"   // Include your libft header for ft_putchar_fd

int main(void)
{
    // Test with various integers
    int fd = 1; // Standard output

    ft_putnbr_fd(42, fd);
    ft_putchar_fd('\n', fd); // Newline for clarity

    ft_putnbr_fd(-42, fd);
    ft_putchar_fd('\n', fd);

    ft_putnbr_fd(0, fd);
    ft_putchar_fd('\n', fd);

    ft_putnbr_fd(2147483647, fd);
    ft_putchar_fd('\n', fd);

    ft_putnbr_fd(-2147483648, fd);
    ft_putchar_fd('\n', fd);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_putnbr_fd.c ft_putchar_fd.c
*/