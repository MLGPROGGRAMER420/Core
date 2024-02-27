/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:00:31 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/27 23:05:29 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int				i;
	unsigned char	*p;
	unsigned char *v;

	// przypisanie pointerowi p zmiennej ptr
	i = 0;
	p = ptr;
	v = (unsigned char)value;
	while (i < num) // dopuki i jest mniejsze od num
	{
		p[i] = v;
		// przypisywanie wartości value do ptr dopuki spełnia warunek
		++i;
	}
	return (ptr);
}

int	main(void)
{
	char test[10];
	ft_memset(test, 'a', sizeof(test));
	// memset(test, 'a', sizeof(test));
	printf("a = %s \n", test);
}