/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:39:54 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 21:05:40 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		p[n] = '\0';
	}
	return (s);
}
/*
int	main(void)
{
	char	test[] = "test";

	ft_bzero(test, sizeof(test));
	printf("bzero = %s \n", test);
	return (0);
}
*/