/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:58:55 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/02/28 18:18:56 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}

int	main(void)
{
	char	test[] = "Karasuie";
	char	dest[] = "jedza?";

	ft_memmove(dest, test, sizeof(test));
	// memmove(dest, test, sizeof(test));
	printf("%s \n", dest);
}
