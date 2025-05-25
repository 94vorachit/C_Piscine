/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioncha2 <pioncha2@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:30:55 by pioncha2          #+#    #+#             */
/*   Updated: 2025/05/24 17:06:44 by pioncha2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	rush(int x, int y);

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_convert_str_to_int(char *str)
{
	int		i;
	long	sum;

	i = 0;
	sum = 0;
	if (ft_str_is_numeric(str))
	{
		while (str[i] != '\0')
		{
			sum = sum * 10 + (str[i] - '0');
			if (sum > INT_MAX)
				return (0);
			i++;
		}
		return (sum);
	}
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = ft_convert_str_to_int(argv[1]);
		y = ft_convert_str_to_int(argv[2]);
		if (x == 0 || y == 0)
			write(1, "Error!!\n", 8);
		else
			rush(x, y);
	}
	else
		write(1, "Error!!\n", 8);
	return (0);
}
