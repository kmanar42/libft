#include "libft.c"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*result;

	result = ft_strrchr("HELLOX", 'L');
	printf("%s\n", result ? result : "NULL");
	return (0);
}
*/
