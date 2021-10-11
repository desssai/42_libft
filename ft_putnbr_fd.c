#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		ft_putchar_fd('-', fd);
	}
	if (n / 10)
		ft_putnbr_fd((sign * (n / 10)), fd);
	ft_putchar_fd((sign * (n % 10)) + 48, fd);
}
