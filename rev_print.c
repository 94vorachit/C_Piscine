/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:51:43 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 20:22:06 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	int	last;

	i = 0;
	while (str[i])
		i++;
	last = i - 1;
	while (last >= 0)
	{
		write(1, &str[last], 1);
		last--;
	}
	str[last] = '\0';
	return (str);
}

int	main(void)
{
	char a[]="asdfgh";
	ft_rev_print(a);
}