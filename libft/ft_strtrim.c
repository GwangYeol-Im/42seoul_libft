/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:57:41 by gim               #+#    #+#             */
/*   Updated: 2020/10/03 13:46:39 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		srt;
	int		end;
	int		idx;

	srt = 0;
	end = ft_strlen(s1);
	while (in_set(s1[srt], set) && s1[srt])
		srt++;
	if (srt == end)
		return (trim = malloc(0));
	end--;
	while (in_set(s1[end], set))
		end--;
	if (!(trim = malloc(sizeof(char) * (end - srt + 1))))
		return (0);
	idx = 0;
	while (srt <= end)
		trim[idx++] = (char)s1[srt++];
	trim[idx] = 0;
	return (trim);
}
