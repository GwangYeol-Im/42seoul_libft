/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 20:30:32 by gim               #+#    #+#             */
/*   Updated: 2020/09/30 11:45:31 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	dest = malloc(size * count);
	if (!dest)
		return (0);
	ft_bzero(dest, count);
	return (dest);
}
