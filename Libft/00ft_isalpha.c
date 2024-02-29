/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00ft_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:34:43 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 21:03:16 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	unsigned char	i;

	i = '2';
	printf("%d\n", ft_isalpha(i));
}
