/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:27:07 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 20:34:34 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_create_arr(int size, char **strs, char *sep)
{
	int		i;
	int		cnt;
	char	*arr;

	cnt = 1;
	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			cnt += ft_strlen(strs[i]);
			i++;
		}
		cnt += (ft_strlen(sep) * (size - 1));
	}
	arr = (char *) malloc(sizeof(char) * cnt);
	if (size <= 0 || strs == NULL || sep == NULL)
		arr[0] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	arr = ft_create_arr(size, strs, sep);
	if (arr == NULL || size <= 0)
		return (arr);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			arr[k++] = strs[i][j++];
		if (size - 1 > i)
		{
			j = 0;
			while (sep[j] != '\0')
				arr[k++] = sep[j++];
		}
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *strs[] = {"AAAAAA", "BB", "C", "DDDD"};
// 	char *sep = ",,,,,,,,";
// 	int size = 3;
// 	char *arr;
// 	arr = ft_strjoin(size, strs, sep);
// 	printf("%s\n", arr);
// 	free(arr);
// }