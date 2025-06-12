/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:17:21 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 18:29:17 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i++] - '0');
	}
	return (sum * sign);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_atoi(av[1]));
// 	else
// 		printf("\n");
// }