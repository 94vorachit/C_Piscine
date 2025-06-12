/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:28:22 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/10 14:16:55 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

// #include <stdlib.h>
// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(char *str)
// {
// 	int		i;
// 	char	*arr;

// 	arr = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
// 	if (arr == NULL)
// 		return (arr);
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		arr[i] = str[i];
// 		i++;
// 	}
// 	arr[i] = '\0';
// 	return (arr);
// }

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// {
// 	t_stock_str	*arr;
// 	int			i;

// 	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
// 	if (arr == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < ac)
// 	{
// 		if (av[i] == NULL)
// 			return (NULL);
// 		arr[i].size = ft_strlen(av[i]);
// 		arr[i].str = ft_strdup(av[i]);
// 		arr[i].copy = ft_strdup(av[i]);
// 		if (arr[i].str == NULL || arr[i].copy == NULL)
// 			return (NULL);
// 		i++;
// 	}
// 	arr[i].str = NULL;
// 	return (arr);
// }

// int	main(int argc, char **argv)
// {
// 		ft_show_tab(ft_strs_to_tab(argc, argv));
// }