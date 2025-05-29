/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 21:34:02 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 21:55:45 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') \
|| (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
		}
		else if ((str[i] == 'z') || (str[i] == 'Z'))
		{
			str[i] -= 25;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	else
		write(1, "\n", 1);
}
