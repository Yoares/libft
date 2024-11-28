/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:24:14 by ykhoussi          #+#    #+#             */
/*   Updated: 2024/11/11 18:34:31 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*list;
	t_list	*last;

	list = ft_lstnew("first");
	ft_lstadd_back(&list, ft_lstnew("second"));
	ft_lstadd_back(&list, ft_lstnew("third"));
	last = ft_lstlast(list);
	t_list *p = list;
	while (p)
	{
		printf("%s\n", (char *)p->content);
		p = p->next;
	}
}*/