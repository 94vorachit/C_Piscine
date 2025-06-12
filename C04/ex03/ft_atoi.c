/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:03:21 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 17:25:44 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	returned;

	index = 0;
	returned = 0;
	sign = 0;
	while ((str[index] > 8 && str[index] < 14) || str[index] == 32)
		index++;
	while (str[index] == 43 || str[index] == 45)
	{
		if (str[index] == 45)
			sign++;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		returned *= 10;
		returned += str[index] - 48;
		index++;
	}
	if (sign % 2 == 1)
		returned *= -1;
	return (returned);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_atoi("	---+--+1234ab567"));
// }