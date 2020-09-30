/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:23:57 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 11:46:14 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*str;
	size_t	idx;

	if (start > ft_strlen(s))
		return (0);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	str = (char *)s;
	while (start--)
		str++;
	idx = 0;
	while (idx <= len)
	{
		sub[idx] = str[idx];
		if (!str[idx])
			return (sub);
		idx++;
	}
	return (sub);
}