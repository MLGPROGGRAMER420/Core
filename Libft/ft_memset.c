/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:00:31 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/26 22:07:27 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;

	// przypisanie pointerowi p zmiennej ptr
	i = 0;
	p = ptr;
	while (i < num) // dopuki i jest mniejsze od num
	{
		p[i] = (unsigned char)value;
		// przypisywanie wartości value do ptr dopuki spełnia warunek
		++i;
	}
	return (ptr);
}

int	main(void)
{
	char test[10];
	ft_memset(test, 'ab', sizeof(test));
	// memset(test, 'ab', sizeof(test));
	printf("a = %s \n", test);
}