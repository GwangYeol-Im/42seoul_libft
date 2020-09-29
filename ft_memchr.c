/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 12:54:59 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/29 13:00:17 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*new_s;
	unsigned char	new_c;

	new_s = (unsigned char *)s;
	new_c = (unsigned char)c;
	while (n--)
	{
		if (*new_s == new_c)
			return (new_s);
		new_s++;
	}
	return (0);
}