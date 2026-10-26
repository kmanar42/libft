#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i]
		&& s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* int	main(void)
{
	printf("%d\n", ft_strncmp("HELLO", "HELP", 3));
	printf("%d\n", ft_strncmp("HELLO", "HELP", 4));
	printf("%d\n", ft_strncmp("ABC", "ABD", 2));
	return (0);
}
*/
