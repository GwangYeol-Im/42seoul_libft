/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:57:41 by gim               #+#    #+#             */
/*   Updated: 2020/10/02 19:56:41 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			in_set(char c, char const *set)
{
	char	*new_set;

	new_set = (char *)set;
	while (*new_set)
	{
		if (c == *new_set)
			return (1);
		new_set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	char	*trim;
	int		srt;
	int		end;
	int		idx;

	new_s1 = (char *)s1;
	srt = 0;
	end = ft_strlen(new_s1);
	while (in_set(new_s1[srt], set) && new_s1[srt])
		srt++;
	if (srt == end)
		return (trim = malloc(0));
	end--;
	while (in_set(new_s1[end], set))
		end--;
	if (!(trim = malloc(sizeof(char) * (end - srt + 1))))
		return (0);
	idx = 0;
	while (srt <= end)
		trim[idx++] = new_s1[srt++];
	trim[idx] = 0;
	return (trim);
}
