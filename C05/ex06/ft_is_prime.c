/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:46:36 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/02 17:17:23 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_is_prime(int nb)
{
	long	i;

	if (nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 0)
		return (0);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_is_prime(293));
// }