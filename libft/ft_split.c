/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:55:51 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 13:43:51 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			get_len(char const *s, char c)
{
	int		len;
	char	*new_s;

	len = 0;
	new_s = (char *)s;
	while (*new_s)
	{
		while (*new_s == c && *new_s)
			new_s++;
		if (!*new_s)
			return (len);
		len++;
		while (*new_s != c && *new_s)
			new_s++;
	}
	return (len);
}

char		**ft_split(char const *s, char c)
{
	int		len;
	int		idx;
	int		split_i;
	char	**split;
	char	*new_s;

	len = get_len(s, c);
	split = malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (0);
	split[len] = 0;
	new_s = (char *)s;
	split_i = 0;
	while (*new_s)
	{
		while (*new_s == c && *new_s)
			new_s++;
		if (!*new_s)
			return (split);
		idx = 0;
		while (new_s[idx] != c && *new_s)
			idx++;
		split[split_i++] = ft_substr(new_s, 0, idx - 1);
		new_s += idx;
	}
	return (split);
}
