#include "libft.h"

int	ft_atoi(const char *num)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((num[i] > 8 && num[i] < 14) || num[i] == 32)
		i++;
	if (num[i] == 43 || num[i] == 45)
	{
		if (num[i] == 45)
			sign = -1;
		i++;
	}
	while (num[i] > 47 && num[i] < 58)
	{
		result = result * 10 + num[i] - 48;
		i++;
	}
	return (result * sign);
}
