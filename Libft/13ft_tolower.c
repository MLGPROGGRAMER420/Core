/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13ft_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:02:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 22:16:18 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 'a');
	}
	else
		return (c);
}

int	main(void)
{
	char low = 'T';
    char high;

	high = ft_tolower(low);
	printf("low_to_high = %c\n", high);
}