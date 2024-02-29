/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12ft_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:01:10 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 22:15:20 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	else
		return (c);
}

int	main(void)
{
	char low = 't';
    char high;

	high = ft_toupper(low);
	printf("low_to_high = %c\n", high);
}