/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:15:07 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 20:35:06 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	long	nb;

	if (n < 0)
		return (0);
	if (n == 1)
		return (1);
	nb = 1;
	while (nb * nb < n)
		nb++;
	if (nb * nb == n)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", is_power_of_2(25));
// }