/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:30:16 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Function to create a new list element
t_list *create_node(int data) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    // Allocate memory for the content and store the data as an int
    new_node->content = malloc(sizeof(int));
    if (!new_node->content) {
        free(new_node);
        return NULL;
    }
    *(int *)(new_node->content) = data; // Store the integer in content
    new_node->next = NULL;
    return new_node;
}

// Function to print the list
void print_list(t_list *lst) {
    while (lst) {
        // Print the integer stored in content
        printf("%d -> ", *(int *)(lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void) {
    t_list *list = NULL; // Initialize the list as empty

    // Create some nodes
    t_list *node1 = create_node(1);
    t_list *node2 = create_node(2);
    t_list *node3 = create_node(3);

    // Add nodes to the front of the list
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    // Print the list to verify the order
    print_list(list); // Expected output: 3 -> 2 -> 1 -> NULL

    // Free the allocated nodes and content (important for avoiding memory leaks)
    free(node1->content);
    free(node2->content);
    free(node3->content);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
//gcc -Wall -Wextra -Werror -o file ft_lstadd_front.c