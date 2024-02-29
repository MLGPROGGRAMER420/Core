/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:47:17 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/29 22:18:16 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	int	i;

	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
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
	printf("%d\n", ft_isalnum(i));
	printf("%d\n", isalnum(i));
}
