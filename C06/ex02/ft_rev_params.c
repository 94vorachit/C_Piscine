/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:22:38 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/04 13:44:39 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	revi;

	i = 1;
	if (argc)
	{
		while (argv[i])
			i++;
		revi = i - 1;
		while (revi >= 1)
		{
			j = 0;
			while (argv[revi][j])
				write(1, &argv[revi][j++], 1);
			write(1, "\n", 1);
			revi--;
		}
	}
}
