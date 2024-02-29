/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10ft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:50:32 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/28 21:07:05 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int	main(void)
{
	char	src[] = "Karas";
	char	dest[] = "test";

	ft_strlcpy(dest, src, sizeof(src));
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
}
*/