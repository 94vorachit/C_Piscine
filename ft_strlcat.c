/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:06:18 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 10:33:51 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size <= 0)
		return (dest_len);
	while (dest_len <= size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int	main(void)
{
	char	string1[] = "12345";
	char	string2[] = "67890";
	int		k;

	k = ft_strlcat(string1, string2, 30);
	printf("%s\n", string1);
	printf("Value returned: %d\n", k);
}*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[r])
		r++;
	if (size <= i)
		return (i);
	else
		r += i;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}

/*#include <stdio.h>
int	main(void)
{
	char	string1[] = "12345";
	char	string2[] = "67890";
	int		k;

	k = ft_strlcat(string1, string2, 20);
	printf("%s\n", string1);
	printf("Value returned: %d\n", k);
}*/