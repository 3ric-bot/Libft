/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:56:03 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 126 || c < 32)
		return (0);
	return (1);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int i;

    printf("Testing ft_isprint:\n");
    for (i = 0; i <= 127; i++)
    {
        if (ft_isprint(i))
            printf("Character %3d: '%c' is printable\n", i, i);
        else
            printf("Character %3d: Non-printable\n", i);
    }

    return 0;
}
*/
//gcc -Wall -Wextra -Werror -o file ft_isprint.c