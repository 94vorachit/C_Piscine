/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioncha2 <pioncha2@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:29:21 by pioncha2          #+#    #+#             */
/*   Updated: 2025/05/24 08:58:40 by pioncha2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int x, char first_c, char mid_c, char last_c)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(first_c);
		else if (i == x - 1)
			ft_putchar(last_c);
		else
			ft_putchar(mid_c);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_print_row(x, '/', '*', '\\');
		else if (i == y - 1)
			ft_print_row(x, '\\', '*', '/');
		else
			ft_print_row(x, '*', ' ', '*');
		i++;
	}
}
