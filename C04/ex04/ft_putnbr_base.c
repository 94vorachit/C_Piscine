/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:12:23 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 21:36:09 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	if (ft_strlen(str) <= 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' \
&& str[i] <= 'z') && !(str[i] >= '0' && str[i] <= '9'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	if (!check_base(base))
		return ;
	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb < len)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "01234567");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "-123456789");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "");
	write (1, "\n", 1);
	ft_putnbr_base(0, "poneyvif");
	write (1, "\n", 1);
	ft_putnbr_base(102509, "");
	write (1, "\n", 1);
	ft_putnbr_base(102509, "1123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(102509, "+123456789ABCDEF");
	write (1, "\n", 1);
}