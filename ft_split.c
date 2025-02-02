/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:13:36 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/02/02 18:57:55 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != 0)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_dup(char const *s, char c)
{
	int		len_w;
	int		i;
	char	*copy;

	i = 0;
	len_w = ft_len(s, c);
	copy = malloc(sizeof(char) * (len_w + 1));
	if (!copy)
		return (NULL);
	while (i < len_w)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

static char	**ft_free(char **strs, int count)
{
	while (count-- > 0)
		free(strs[count]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	i = 0;
	if (!s || w_count(s, c) == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (w_count(s, c) + 1));
	if (!strs)
		return (NULL);
	while (*s != 0)
	{
		while (*s != 0 && *s == c)
			s++;
		if (*s != 0)
		{
			strs[i] = ft_dup(s, c);
			if (strs[i] == NULL)
				return (ft_free(strs, i));
			i++;
		}
		while (*s != 0 && *s != c)
			s++;
	}
	strs[i] = 0;
	return (strs);
}

/*int	main(void)
{
	char	*s;
	char	c;
	char	**result;
	size_t	i;

	s = "hello, attak, goooo, goos.asw,el";
	c = ' ';
	i = 0;
	result = ft_split(s, c);
	while (result[i] != NULL)
	{
		printf("result[%zu] = %s\n", i, result[i]);
		i++;
	}
}*/