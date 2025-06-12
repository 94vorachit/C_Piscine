/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:49:50 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 19:14:34 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*arr;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (arr);
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
