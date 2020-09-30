/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:59:30 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 16:22:36 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *find, size_t len)
{
	char	*new_big;
	int		idx;

	new_big = (char *)big;
	idx = 0;
	if (!find[idx])
		return (new_big);
	while (len--)
	{
		if (find[idx] == '\0')
			return (new_big - idx);
		if (*new_big != find[idx])
			idx = 0;
		else
			idx += 1;
		new_big++;
	}
	return (0);
}
