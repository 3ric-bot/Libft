/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 17:25:37 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}

/*
#include <stdio.h>
#include "libft.h"

// Test function to modify the character based on its index
void modify_char(unsigned int index, char *c) {
    *c = *c + index; // Shift the character by its index
}

int main(void) {
    char str[] = "abcdef"; // Test string

    printf("Original string: %s\n", str);
    ft_striteri(str, modify_char); // Call ft_striteri
    printf("Modified string: %s\n", str); // Print modified string

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_striteri.c
*/