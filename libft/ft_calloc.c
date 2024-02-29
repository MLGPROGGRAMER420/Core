/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:05:30 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/29 22:36:58 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bzero.c"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

	full_size = nmemb * size;
	ptr = malloc(full_size);
	if (!ptr)
	{
		return (NULL);
	}
    else
    {
        ft_bzero(ptr,full_size);
    }
	return (ptr);
}

int	main(void)
{
void *ptr = ft_calloc(5, 5);
printf("Alocation = %p", ptr);
free(ptr);
}