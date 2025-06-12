/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:19:18 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 16:09:14 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (nb <= 0)
		return (dest);
	while (dest[i])
		i++;
	while (src[j] && nb > 0)
	{
		nb--;
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
	char	str2[] = "X X X";
	printf("%s\n", ft_strncat(str1, str2, 3));
}*/