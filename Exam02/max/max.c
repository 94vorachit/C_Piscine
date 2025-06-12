/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:15:05 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 21:28:20 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = 0;
	if (*tab == '\0')
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[5] = {9, 1, 500, 99, 1000};
// 	printf("%d\n", max(tab, 5));
// }
