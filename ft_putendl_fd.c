/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:49:56 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include "libft.h"

int main(void)
{
    // Test string
    char *test_str = "Hello, World!";

    // Call ft_putendl_fd to print the string to standard output (fd = 1)
    ft_putendl_fd(test_str, 1);

    // Call ft_putendl_fd to print another string to standard error (fd = 2)
    ft_putendl_fd("This is an error message!", 2);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_putendl_fd.c ft_putchar_fd.c
*/