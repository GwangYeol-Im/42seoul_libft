/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:23:57 by gim               #+#    #+#             */
/*   Updated: 2020/10/01 10:34:23 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*str;
	size_t	idx;

	if (start > ft_strlen(s) || len <= 0)
	{
		sub = malloc(0);
		return (sub);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	str = (char *)s + start;
	idx = 0;
	while (idx < len)
	{
		if (!str[idx])
			return (sub);
		sub[idx] = str[idx];
		idx++;
	}
	sub[idx] = '\0';
	return (sub);
}
