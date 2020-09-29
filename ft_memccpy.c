/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:16:31 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/29 11:31:47 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;
	unsigned char	new_c;

	new_dst = dst;
	new_src = (unsigned char *)src;
	new_c = (unsigned char)c;
	while (n--)
	{
		if (*new_src == new_c)
		{
			*new_dst = *new_src;
			return (dst);
		}
		*new_dst++ = *new_src++;
	}
	return (dst);
}