/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:37:48 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 18:52:17 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_iterative_power(3, 2));
// }