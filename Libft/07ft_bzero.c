/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:39:54 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/26 21:56:13 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	bzero(void *s, size_t num)
{
    size_t i;
    unsigned char *p;

    i = 0;
    p = s;
    while (i < num)
    {
        p[i] = '\0';
        ++i;
    }
}

int	main(void)
{
    char test[10];
    bzero(test, sizeof(test));

    printf("bzero = %s \n", test);
    return 0;
}
