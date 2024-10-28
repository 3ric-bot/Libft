/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoehlers <eoehlers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:04:21 by eoehlers          #+#    #+#             */
/*   Updated: 2024/10/25 18:11:16 by eoehlers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}

//#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

//void	del(void *content)
//{
//	free(content);
//}

//void	print_list(t_list *lst)
//{
//	while (lst)
//	{
//		printf("%s -> ", (char *)lst->content);
//		lst = lst->next;
//	}
//	printf("NULL\n");
//}

// int main(void)
// {
// 	// Create a simple linked list
// 	t_list *list = ft_lstnew(ft_strdup("Node 1"));
// 	list->next = ft_lstnew(ft_strdup("Node 2"));
// 	list->next->next = ft_lstnew(ft_strdup("Node 3"));

// 	printf("Original list:\n");
// 	print_list(list);

// 	// Clear the list
// 	ft_lstclear(&list, del);

// 	printf("Cleared list:\n");
// 	if (list == NULL)
// 		printf("List is NULL\n");
// 	else
// 		print_list(list);

// 	return 0;
// }

//  gcc -Wall -Wextra -Werror -o file ft_lstclear.c ft_strdup.c ft_memcpy.c 
// 	ft_lstnew.c ft_strlen.c ft_lstdelone.c