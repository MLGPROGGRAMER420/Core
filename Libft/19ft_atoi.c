/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:05:14 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/29 01:21:13 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
        res = res * 10 + (str[i] - '0');
        i++;
	}
    return (res * sign);
}

int	main(void)
{
	char string[] = "   ---+++12345";

	printf("Resoult = %d\n", ft_atoi(string));
}