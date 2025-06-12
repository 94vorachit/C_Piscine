/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:01:45 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 15:27:50 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_alpha(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = c - 97;
	else if (c >= 'A' && c <= 'Z')
		i = c - 65;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') \
|| (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				j = ft_count_alpha(av[1][i]);
				while (j >= 0)
				{
					write(1, &av[1][i], 1);
					j--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
