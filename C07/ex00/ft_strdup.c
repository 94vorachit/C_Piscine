/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:47:29 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 19:22:35 by vorhansa         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	size = ft_strlen(src);
	dup = (char *) malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*src;
// 	char	*dup;
// 	src = "Memory for the new string is obtained with malloc";
// 	dup = NULL;
// 	printf("Before >> dup : %s\n", dup);
// 	dup = ft_strdup(src);
// 	printf("After  >> dup : %s\n", dup);
// 	free(dup);
// }