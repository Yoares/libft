/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:35:30 by ykhoussi          #+#    #+#             */
/*   Updated: 2024/11/12 14:45:24 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
}

/*int main(void)
{
	t_list *x =  ft_lstnew("hello") ;
	ft_lstadd_back(&x,ft_lstnew("world")) ;
	printf("%s" , (char *)(x->content)) ;
	printf("%s" , (char *)(x->next->content)) ;

}*/
