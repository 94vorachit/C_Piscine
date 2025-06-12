/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:43:49 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 16:09:25 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i++] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	str1[] = "ABCD";
	char	str2[] = " EFGH";

	printf("%s\n", ft_strcat(str1, str2));
}*/