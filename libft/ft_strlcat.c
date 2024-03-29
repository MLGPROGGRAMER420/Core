/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:51:54 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/03/01 02:15:47 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	dest_len = 0;
	src_len = 0;
	while (dst[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + 1 < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = src[i];
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	src[] = "karasie";
	char	dest[] = "jedza";
	int		d;
	int		s;
	int		siz;

	s = sizeof(src);
	d = sizeof(dest);
	siz = s + d;
	ft_strlcat(dest, src, siz);
	printf("dest = %s\n", dest);
}
*/