/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:50:38 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 20:57:09 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	temp;
	int	last;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	j = 0;
	while (last > j)
	{
		temp = str[j];
		str[j] = str[last];
		str[last] = temp;
		j++;
		last--;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str[17] = "words and letters";

	printf("Regular String: %s\n", str);
	printf("Reversed String: %s\n", ft_strrev(str));
}