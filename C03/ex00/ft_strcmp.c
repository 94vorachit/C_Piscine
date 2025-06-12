/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:00:12 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 16:10:04 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
void	ft_print(int num)
{
	if (num == 0)
		printf("<str1> and <str2> are equal : ");
	else if (num > 0)
		printf("<str1> is greater than <str2> : ");
	else
		printf("<str1> is less than <str2> : ");
	printf("(%d)\n", num);
}
int	main(void)
{
	char	returned;

	returned = ft_strcmp("ABC", "AB");
	ft_print(returned);
	returned = ft_strcmp("ABA", "ABZ");
	ft_print(returned);
	returned = ft_strcmp("ABC", "ABC");
	ft_print(returned);
}*/