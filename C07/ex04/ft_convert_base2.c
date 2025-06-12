/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 13:58:14 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/10 17:10:39 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	if (len <= 1)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_base_match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	if (!ft_check_base(base))
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && ft_base_match(str[i], base) >= 0)
	{
		sum = (sum * ft_strlen(base)) + ft_base_match(str[i], base);
		i++;
	}
	return (sum * sign);
}
