/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:56:59 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Function to create a new list node
t_list *create_node(int value) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) {
        return NULL;
    }
    new_node->content = (void *)(long)value;
    new_node->next = NULL;
    return new_node;
}

// Function to print the linked list
void print_list(t_list *lst) {
    while (lst) {
        printf("%d -> ", (int)(long)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    t_list *list = NULL; // Initialize an empty list

    // Create some nodes
    t_list *node1 = create_node(1);
    t_list *node2 = create_node(2);
    t_list *node3 = create_node(3);

    // Add nodes to the list
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Print the list
    printf("Linked List: ");
    print_list(list);

    // Free the list
    t_list *tmp;
    while (list) {
        tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}
*/
//gcc -Wall -Wextra -Werror -o file ft_lstadd_back.c ft_lstlast.c