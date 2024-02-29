/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15ft_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:04:00 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 23:11:11 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char str_1[] = "Testz";
	char str_2[] = "Testy";

	printf("wynik to = %d\n", ft_strncmp(str_1, str_2, sizeof(str_1)));
}