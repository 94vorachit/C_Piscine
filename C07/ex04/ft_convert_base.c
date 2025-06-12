/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:58:12 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 16:24:54 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *str);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	ft_arr_size(int nbr, char *base)
{
	long	n;
	int		cnt;

	n = nbr;
	cnt = 0;
	if (n < 0)
	{
		n *= -1;
		cnt++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= ft_strlen(base);
		cnt++;
	}
	return (cnt);
}

char	*ft_create_arr(int nbr, char *base_to)
{
	int		i;
	int		size;
	char	*arr;

	i = 0;
	size = ft_arr_size(nbr, base_to);
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);
	if (nbr == 0)
	{
		arr[0] = base_to[0];
		arr[1] = '\0';
		return (arr);
	}
	while (i < size)
	{
		arr[i] = base_to[0];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_itoa(char *arr, int nbr, char *base_to)
{
	int		size;
	int		base_size;
	long	temp;

	size = ft_arr_size(nbr, base_to) - 1;
	base_size = ft_strlen(base_to);
	temp = nbr;
	if (temp < 0)
	{
		arr[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		arr[size] = base_to[temp % base_size];
		temp /= base_size;
		size--;
	}
	return (arr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	char	*arr;

	arr = NULL;
	if (!(ft_check_base(base_from) && ft_check_base(base_to)))
		return (arr);
	dec = ft_atoi_base(nbr, base_from);
	arr = ft_create_arr(dec, base_to);
	arr = ft_itoa(arr, dec, base_to);
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 		char *arr;
// 		arr = ft_convert_base(" ---++5bf9","0123456789abcdef", "0123456789");
// 		printf("result(str) : %s \n", arr);
// 		free(arr);
// }