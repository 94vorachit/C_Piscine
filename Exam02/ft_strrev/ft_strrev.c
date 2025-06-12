/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:24:29 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/12 19:40:20 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		last;
	char	temp;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	i = 0;
	while (last > i)
	{
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;
		i++;
		last--;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[10] = "0123456789";
// 	printf("%s\n", ft_strrev(a));
// }