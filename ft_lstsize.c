/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:50:18 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	if (!lst)
		return (size);
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Creating a simple linked list for testing
    t_list *head = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));

    // Initializing the linked list
    head->content = "First";
    head->next = second;

    second->content = "Second";
    second->next = third;

    third->content = "Third";
    third->next = NULL;

    // Testing ft_lstsize
    int size = ft_lstsize(head);
    printf("Size of the linked list: %d\n", size); // Should print 3

    // Freeing the allocated memory
    free(third);
    free(second);
    free(head);

    return 0;
}
*/
/*
gcc -Wall -Wextra -Werror -o file ft_lstsize.c
*/