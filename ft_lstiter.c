/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:04:33 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>  // For malloc, free, and strdup
#include "libft.h"

// Example function to be applied to each list element
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    // Create a simple linked list with dynamically allocated strings
    t_list *head = ft_lstnew(ft_strdup("Node 1"));
    head->next = ft_lstnew(ft_strdup("Node 2"));
    head->next->next = ft_lstnew(ft_strdup("Node 3"));

    // Use ft_lstiter to apply print_content to each element
    ft_lstiter(head, print_content);

    // Free the list
    ft_lstclear(&head, free);  // Free both the nodes and their content

    return 0;
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_lstiter.c ft_lstclear.c ft_lstnew.c
	ft_lstdelone.c ft_strdup.c ft_memcpy.c ft_strlen.c
*/