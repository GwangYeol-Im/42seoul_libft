/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 20:21:51 by gim               #+#    #+#             */
/*   Updated: 2020/09/29 20:24:49 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len;
	int		idx;
	char	*dest;

	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (len + 1));
	while (idx <= len)
	{
		dest[idx] = s1[idx];
		idx++;
	}
	return (dest);
}