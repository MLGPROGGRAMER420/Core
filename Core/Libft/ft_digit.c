/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:22:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/26 17:36:31 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while ((c[i] != '\0') && (c[i] >= '0' && c[i] <= '9'))
	{
		i++;
	}
	if (c[i] == '\0')
	{
		
        printf("zmienna = %s ma tylko liczbą", c);
		return (0);
	}
	else
	{
		printf("zmienna = %s jest do dupy", c);
		return (1);
	}
}

int	main(void)
{
	char test[] = "123";
	ft_isdigit(test);
}