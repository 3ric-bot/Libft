/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:57:23 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Testing ft_putstr_fd with standard output (file descriptor 1)
    char *str = "Hello, World!\n";
    
    // Use ft_putstr_fd to print the string to the standard output
    ft_putstr_fd(str, 1);

    // Testing ft_putstr_fd with standard error (file descriptor 2)
    char *error_str = "This is an error message!\n";
    
    // Use ft_putstr_fd to print the error message to the standard error
    ft_putstr_fd(error_str, 2);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_putstr_fd.c ft_putchar_fd.c
*/