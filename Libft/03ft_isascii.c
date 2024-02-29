/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:41:28 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 21:01:35 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	printf("%d\n", ft_isascii(i));
}
