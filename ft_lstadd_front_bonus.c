/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:26:25 by ykhoussi          #+#    #+#             */
/*   Updated: 2024/11/12 13:42:42 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *list = ft_lstnew("second");
	ft_lstadd_front(&list, ft_lstnew("first"));
	t_list *p = list;

	while (p)
	{
		printf("%s\n", (char *)p->content);
		p = p->next;
	}
}*/