/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:22:00 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/04/15 18:36:06 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;
	void	*free_content;

	if (!lst)
		return (NULL);
	free_content = f(lst->content);
	tmp = ft_lstnew(free_content);
	if (!tmp)
		ft_lstdelone(tmp, del);
	lst = lst->next;
	list = tmp;
	while (lst)
	{
		free_content = f(lst->content);
		tmp->next = ft_lstnew(free_content);
		if (!tmp)
			ft_lstdelone(tmp, del);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (list);
}
