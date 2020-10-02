/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:23:57 by gim               #+#    #+#             */
/*   Updated: 2020/10/02 18:58:31 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*str;
	size_t	s_len;
	size_t	idx;

	s_len = ft_strlen(s);
	if (start > ft_strlen(s) || len < 0)
	{
		sub = malloc(0);
		return (sub);
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	str = (char *)s + start;
	ft_strlcpy(sub, str, len);
	return (sub);
}
