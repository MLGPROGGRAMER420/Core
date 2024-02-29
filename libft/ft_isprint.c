/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:45:19 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/29 22:18:18 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
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
	printf("%d\n", ft_isprint(i));
}
