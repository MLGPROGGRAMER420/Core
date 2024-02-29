/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14ft_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:03:23 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/02/28 22:45:16 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
    int i = 0;
    while (*s != '\0')
    {
        if(*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }
    if((char)c == '\0')
    {
        return (char *)s;
    }
    return NULL;
}
int	main(void)
{
    char string[] = "Test string";
    char *res;

    res = ft_strchr(string, 's');
    printf("Resoult = %s \n", res);
}