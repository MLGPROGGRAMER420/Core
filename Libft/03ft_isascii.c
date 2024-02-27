/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:41:28 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/27 23:36:46 by mlg_ubuntu_      ###   ########.fr       */
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
	unsigned char i = '2';

	printf("%d\n", ft_isascii(i));
	//printf("%d\n", isascii(i));
}