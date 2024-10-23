/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:04:20 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Function to create a new node
t_list *ft_lstnew(void *content) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) return NULL;
    new_node->content = content; // No cast needed here, as content is void *
    new_node->next = NULL;
    return new_node;
}

// Main function to test ft_lstlast
int main(void) {
    // Creating a simple linked list: 1 -> 2 -> 3
    t_list *head = ft_lstnew((void *)(intptr_t)1);  // Store integer as void *
    head->next = ft_lstnew((void *)(intptr_t)2);
    head->next->next = ft_lstnew((void *)(intptr_t)3);

    // Call ft_lstlast
    t_list *last = ft_lstlast(head);
    
    // Print the content of the last node
    if (last) {
        printf("Last node content: %d\n", (int)(intptr_t)last->content);
    } else {
        printf("The list is empty.\n");
    }

    // Free allocated memory (clean-up)
    t_list *current = head;
    t_list *next_node;
    while (current) {
        next_node = current->next;
        free(current);
        current = next_node;
    }

    return 0;
}
*/
//gcc -Wall -Wextra -Werror -o file ft_lstlast.c