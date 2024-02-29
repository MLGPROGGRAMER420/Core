/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:57:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 21:01:06 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	if (!dest && !src)
	{
		return (dest);
	}
	while (n--)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
/*
int	main(void)
{
	char test[] = "Karasuie";
	char *dest;

	ft_memcpy(dest, test, sizeof(test));
	printf("%s \n", dest);
}
*/