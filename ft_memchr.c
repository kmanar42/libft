#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	size_t	i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = {'A', '\0', 'B', 'C'};
	char	*p;

	p = ft_memchr(str, 'B', 4);
	printf("%c\n", p ? *p : '?');
	return (0);
}
*/
