/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:01:24 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 19:39:03 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	i;
// 	int	*temp;
// 	min = -1;
// 	max = 9;
// 	temp = ft_range(min, max);
// 	i = 0;
// 	while (i < max - min)
// 		printf("%d ", temp[i++]);
// 	printf("\n");
// 	free(temp);
// }