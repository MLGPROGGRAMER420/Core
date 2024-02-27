/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:47:17 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/26 19:42:16 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_islnum(char *c)
{
	int	i;

	i = 0;
	while ((c[i] != '\0') && (c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A'
			&& c[i] >= 'Z') || (c[i] >= '0' && c[i] <= '9'))
	{
		i++;
	}
	if (c[i] == '\0')
	{
		printf("zmienna = %s ma tylko litery alf lub cyfry", c);
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
	char test[] = "tes123t";
	ft_islnum(test);
}