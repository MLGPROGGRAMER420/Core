/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:00:31 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 20:56:04 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;
	unsigned char	*v;

	i = 0;
	p = ptr;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		++i;
	}
	return (ptr);
}

int	main(void)
{
	char	test[10];

	ft_memset(test, 'a', sizeof(test));
	printf("a = %s \n", test);
}
