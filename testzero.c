
#include <stdio.h>
#include <strings.h>

char	*ft_bzero(char *str, size_t num)
{
	unsigned char	*p;

	p = str;
	while (num--)
	{
		p[num] = '\0';
	}
	return (str);
}

int	main(void)
{
	char	test[] = "testosteron";

	ft_bzero(test, 3);
	printf("bzero = %s \n", test);
	return (0);
}
