/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:26:30 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 19:32:21 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	n;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(100));
// }