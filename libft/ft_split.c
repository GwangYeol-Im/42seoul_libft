/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:55:51 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 20:41:52 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			count_units(char *s, char c)
{
	int		len;

	len = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			return (len);
		len++;
		while (*s != c && *s)
			s++;
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

	new_s = (char *)s;
	len = count_units(new_s, c);
	if (!(split = malloc(sizeof(char *) * (len + 1))))
		return (0);
	split[len] = 0;
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
