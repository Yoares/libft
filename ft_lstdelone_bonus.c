/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:01:08 by ykhoussi          #+#    #+#             */
/*   Updated: 2024/11/12 15:33:48 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/*void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list *node = ft_lstnew(ft_strdup("hello"));
	printf("%s\n", (char *)node->content);
	ft_lstdelone(node, del);
}*/
