/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:08:19 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/04/15 15:46:25 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst && new)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	int		i = 0;
// 	t_list	**head = malloc(sizeof(t_list *));
// 	*head = ft_lstnew((void *)&arr[i++]);
// 	t_list	*tmp = *head;
// 	printf("node %d = %c\n", i - 1, *(char *)tmp->content);
// 	while (arr[i] && tmp)
// 	{
// 		tmp->next = ft_lstnew((void *)&arr[i]);
// 		tmp = tmp->next;
// 		printf("node %d = %c\n", i, *(char *)tmp->content);
// 		i++;
// 	}
// 	return (0);
// }
