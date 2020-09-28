/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 22:15:12 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/28 23:34:10 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	idx = dst_len;
	while (idx < dstsize - 1)
	{
		if (*src == '\0')
		{
			dst[idx] = '\0';
			return (dst_len + src_len);
		}
		dst[idx++] = *src++;
	}
	dst[idx] = '\0';
	return (dst_len + src_len);
}