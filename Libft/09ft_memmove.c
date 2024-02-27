/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:58:55 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/28 00:32:51 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	temp[n];
	char	*d;
	char	*t;
	size_t	i;
	size_t	x;

	s = (char *)src;
	d = (char *)dest;
	t = (char *)temp;
	i = 0;
	x = 0;
	while (i < n)
	{
		temp[i] = s[i];
		d[x] = temp[x];
		i++;
		x++;
	}
	return (dest);
}

int	main(void)
{
	char test[] = "Karasuie";
	char *dest;

	ft_memmove(dest, test, sizeof(test));
	// memmove(dest, test, sizeof(test));
	printf("%s \n", dest);
}