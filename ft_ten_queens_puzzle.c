/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:12:09 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/04 11:26:21 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	ft_check_queen(int board[10], int x, int y)
// {
// 	int	i;

// 	i = 0;
// 	while (i < x)
// 	{
// 		if ((i - board[i] == x - y) || (i + board[i] == x + y) || y == board[i])
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// void	ft_solve_queen(int board[10], int *result, int pos)
// {
// 	int	i;

// 	i = 0;
// 	if (pos == 10)
// 	{
// 		*result += 1;
// 		while (i < 10)
// 		{
// 			ft_putchar(board[i] + '0');
// 			i++;
// 		}
// 		ft_putchar('\n');
// 	}
// 	else
// 	{
// 		while (i < 10)
// 		{
// 			if (ft_check_queen(board, pos, i))
// 			{
// 				board[pos] = i;
// 				ft_solve_queen(board, result, pos + 1);
// 			}
// 			i++;
// 		}
// 	}
// }

// int	ft_ten_queens_puzzle(void)
// {
// 	int	board[10];
// 	int	i;
// 	int	result;

// 	i = 0;
// 	while (i < 10)
// 	{
// 		board[i] = i;
// 		i++;
// 	}
// 	result = 0;
// 	ft_solve_queen(board, &result, 0);
// 	return (result);
// }

// int	main(void)
// {
// 	ft_ten_queens_puzzle();
// }