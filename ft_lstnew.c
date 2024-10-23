/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:49:09 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *node;
    char *content = "Hello, world!";

    // Create a new list node
    node = ft_lstnew(content);

    // Check if the node was created successfully
    if (node == NULL)
    {
        printf("Failed to create new node.\n");
        return (1);
    }

    // Print the content of the node
    printf("Node content: %s\n", (char *)node->content);

    // Free the allocated memory for the node
    free(node);

    return (0);
}
*/
/*
	gcc -Wall -Wextra -Werror -o file ft_lstnew.c
*/