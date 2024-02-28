/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11ft_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:51:54 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/28 17:59:20 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	z;
	size_t	dest_len;

	z = 0;
	i = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	dest_len = z;
	while (src[i] != '\0' && i < size)
	{
		dest[z] = src[i];
		i++;
		z++;
	}
	if (dest_len < size)
	{
		dest[z] = '\0';
	}
	return (dest_len + i);
}
int	main(void)
{
	char src[] = "karasie";
	char dest[] = "jedza";

	int d, s;

	s = sizeof(src);
	d = sizeof(dest);
	int siz = s + d;

	ft_strlcat(dest, src, siz);
	printf("dest = %s\n", dest);
}