/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/22 15:30:26 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	tmp->next = NULL;
	return (new);
}

/*
#include <stdio.h>
#include "libft.h"

// Sample function to apply to each element
void *increment(void *content)
{
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (new_value)
        *new_value = *value + 1; // Increment the value
    return new_value;
}

// Function to delete the content of a list element
void del(void *content)
{
    free(content); // Free allocated content
}

int main(void)
{
    t_list *list = NULL;
    t_list *mapped_list;
    int *value;

    // Creating a sample linked list with 5 elements (0, 1, 2, 3, 4)
    for (int i = 0; i < 5; i++)
    {
        value = malloc(sizeof(int));
        if (value)
            *value = i; // Assigning the value
        ft_lstadd_back(&list, ft_lstnew(value));
    }

    // Apply ft_lstmap
    mapped_list = ft_lstmap(list, increment, del);
    
    // Print original list
    printf("Original list:\n");
    for (t_list *tmp = list; tmp; tmp = tmp->next)
    {
        printf("%d ", *(int *)tmp->content);
    }
    printf("\n");

    // Print mapped list
    printf("Mapped list (incremented values):\n");
    for (t_list *tmp = mapped_list; tmp; tmp = tmp->next)
    {
        printf("%d ", *(int *)tmp->content);
    }
    printf("\n");

    // Clean up original list
    ft_lstclear(&list, del);
    // Clean up mapped list
    ft_lstclear(&mapped_list, del);

    return 0;
}
*/
/*	gcc -Wall -Wextra -Werror -o file ft_lstmap.c ft_lstclear.c ft_lstadd_back.c
	ft_lstnew.c ft_lstdelone.c ft_lstlast.c
*/