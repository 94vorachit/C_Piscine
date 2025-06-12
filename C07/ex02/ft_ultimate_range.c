/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:30:12 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 20:08:50 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// int	ft_ultimate_range(int **range, int min, int max)
// {
// 	int	size;
// 	int	i;

// 	if (min >= max)
// 	{
// 		*range = NULL;
// 		return (0);
// 	}
// 	size = max - min;
// 	*range = (int *) malloc(sizeof(int) * size);
// 	if (*range == NULL)
// 		return (-1);
// 	i = 0;
// 	while (i < size)
// 	{
// 		(*range)[i] = min + i;
// 		i++;
// 	}
// 	return (size);
// }
int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	*range = NULL;
	if (size <= 0)
		return (0);
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 10;
// 	int	max = 100;
// 	int	size;
// 	int	*arr;
// 	int	i = 0;

// 	arr = NULL;
// 	size = ft_ultimate_range(&arr, min, max);
// 	printf("ft_ultimate_range(%d, %d) >> ", min, max);
// 	if (size > 0)
// 	{
// 		i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 		printf("\n");
// 	}
// 	else
// 	{
// 		if (arr == NULL)
// 			printf("NULL\n");
// 	}
// 	free(arr);
// }