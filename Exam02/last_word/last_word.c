/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:35:59 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 21:11:08 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;
	int	last;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	while (str[last] == ' ' || str[last] == '\t')
		last--;
	while (str[last] != ' ' && str[last] != '\t' && last > 0)
		last--;
	last++;
	while (str[last] != ' ' && str[last] != '\t' && str[last])
		write(1, &str[last++], 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	else
		write(1, "\n", 1);
}
