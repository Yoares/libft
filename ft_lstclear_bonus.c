/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:59:21 by ykhoussi          #+#    #+#             */
/*   Updated: 2024/11/12 16:02:42 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;
	t_list	*next;

	if (!lst || !del)
		return ;
	c = *lst;
	while (c)
	{
		next = c->next;
		del(c->content);
		free(c);
		c = next;
	}
	*lst = NULL;
}
