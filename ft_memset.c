/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imgwang-yeol <imgwang-yeol@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 09:54:55 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/29 10:33:38 by imgwang-yeo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*temp;

	temp = ptr;
	while (num--)
	{
		*temp++ = (unsigned char)value;
	}
	return (ptr);
}
