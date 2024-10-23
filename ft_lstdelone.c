/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 13:38:03 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// A sample delete function to free the content of a node
void delete_content(void *content)
{
    free(content); // Assuming the content was dynamically allocated
}

int main(void)
{
    // Create a new linked list node
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return (1); // Handle malloc failure

    // Allocate memory for the content and assign a value
    node->content = malloc(sizeof(int));
    if (!node->content)
    {
        free(node);
        return (1); // Handle malloc failure
    }
    *(int *)node->content = 42; // Assign a value to the content

    // Set the next pointer to NULL (end of list)
    node->next = NULL;

    // Print the content before deletion
    printf("Content before deletion: %d\n", *(int *)node->content);

    // Delete the node using ft_lstdelone
    ft_lstdelone(node, delete_content);

    return 0;
}
*/
// gcc -Wall -Wextra -Werror -o file ft_lstdelone.c