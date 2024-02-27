/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:41:28 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/26 19:44:55 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_isascii(char *c)
{
	int	i;

	i = 0;
	while ((c[i] != '\0') && (c[i] >= 0) && (c[i] <= 127))
	{
		i++;
	}
	if (c[i] == '\0')
	{
		printf("zmienna = %s ma tylko litery alf", c);
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
	char test[] = "test";
	ft_isalpha(test);
}