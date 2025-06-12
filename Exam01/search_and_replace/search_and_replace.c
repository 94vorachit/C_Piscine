/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:15:59 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 16:34:59 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char s, char r)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == s)
			str[i] = r;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!av[2][1] && !av[3][1])
			ft_search_and_replace(av[1], *av[2], *av[3]);
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
