/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:59:30 by gim               #+#    #+#             */
/*   Updated: 2020/09/29 21:47:50 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay_temp;
	int		idx;

	hay_temp = (char *)haystack;
	idx = 0;
	if (!needle[idx])
		return (hay_temp);
	while (len--)
	{
		if (needle[idx] == '\0')
			return (hay_temp - idx);
		if (*hay_temp != needle[idx])
			idx = 0;
		else
			idx += 1;
		hay_temp++;
	}
	return (0);
}
