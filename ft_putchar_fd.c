/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 16:47:35 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>   // For open()
#include <unistd.h>  // For write()
#include "libft.h"

int main(void)
{
    char c = 'A';  // Character to write
    int fd;

    // Write to standard output (stdout)
    ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);  // Add newline to the file

    // Open a file for writing
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        // Error handling for file open
        ft_putchar_fd('E', 1); // Indicate error on stdout
		ft_putchar_fd('\n', 1);
		return 1;
    }

    // Write to the file
    ft_putchar_fd(c, fd);
	ft_putchar_fd('\n', fd);

    // Close the file
    close(fd);

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_putchar_fd.c
*/