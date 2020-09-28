/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 21:31:32 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/28 22:29:43 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		idx;
	int		len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	idx = 0;
	while (idx < dstsize - 1)
	{
		if (src[idx] == '\0')
		{
			dst[idx] = '\0';
			return (len);
		}
		dst[idx] = src[idx];
		idx++;
	}
	dst[dstsize - 1] = '\0';
	return (len);
}
