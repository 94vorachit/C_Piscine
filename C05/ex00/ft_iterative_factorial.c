/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:45:53 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 18:35:01 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		nb = 1;
	while (result > 1)
	{
		result--;
		nb *= result;
	}
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// }