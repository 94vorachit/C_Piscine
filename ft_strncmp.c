/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:15:56 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 16:09:44 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i])
	{
		n--;
		if (s1[i] == '\0' || n == 0)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
void	ft_print(int n, char *a, char *b, int index)
{
	if (index != 0)
	{
		if (n == 0)
			printf("first %d characters of str1 is equal to str2\n", index);
		else if (n < 0)
			printf("str1 is less than str2 : %d\n", n);
		else
			printf("str1 is greater than str2 : %d\n", n);
	}
	else
		printf("ERROR\n");
}
int	main(void)
{
	int	result;
	int	index;
	char	str1[] = "ABCD";
	char	str2[] = "ABC";

	index = 4;
	result = ft_strncmp(str1, str2, index);
	ft_print(result, str1, str2, index);
}*/