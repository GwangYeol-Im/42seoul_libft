/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gim <gim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:43:02 by imgwang-yeo       #+#    #+#             */
/*   Updated: 2020/09/29 18:49:41 by gim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *ptr, int value, size_t num);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);

#endif
