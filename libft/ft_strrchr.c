/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:02:29 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/29 22:42:48 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strrchr(const char *str, int c)
{
	char	*res;
	size_t	i;
	char	*string;

	res = NULL;
	string = (char *)str;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == c)
		{
			res = &string[i];
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	char str[] = "string kaczynski";

	char *Res = strrchr(str, 'n');

    printf("Res = %s\n", Res);
}