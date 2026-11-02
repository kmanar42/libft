#include "libft.h"

static int	count_digits(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = count_digits(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > 0 && str[len - 1] != '-')
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
