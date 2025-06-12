/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:14:57 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 17:44:33 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H
// typedef struct s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }	t_stock_str;
// #endif

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*arr;

	arr = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (arr == NULL)
		return (arr);
	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = ft_strdup(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].str == NULL || arr[i].copy == NULL)
			return (NULL);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}

// #include <stdio.h>
// void	print_array(t_stock_str *str)
// {
// 	int	i;

// 	i = 1;
// 	while (str[i].str != NULL)
// 	{
// 		printf("[%d] : Size: %d : String: %s : Copy: %s\n",
// 		i, str[i].size,	str[i].str, str[i].copy);
// 		// free(str);
// 	       i++;	
// 	}
// 	free(str);
// }

// int	main(int argc, char **argv)
// {
// 	print_array(ft_strs_to_tab(argc, argv));
// }