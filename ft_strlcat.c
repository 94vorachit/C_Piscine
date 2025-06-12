/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:06:18 by vorhansa          #+#    #+#             */
/*   Updated: 2025/05/29 16:08:39 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (size <= 0)
		return (j);
	while (dest_len <= size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (j + src_len + 1);
}*/
/*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
		r += size;
	else
		r += i;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_src;
	unsigned int	s_dest;
	unsigned int	i;

	s_src = ft_strlen(src);
	s_dest = ft_strlen(dest);
	i = 0;
	if (s_dest < size)
		s_src += s_dest;
	else
		s_src += size;
	if (size > 0)
	{
		while (*(src + i) && (i + s_dest) < size - 1)
		{
			*(dest + i + s_dest) = *(src + i);
			i++;
		}
		*(dest + s_dest + i) = '\0';
	}
	return (s_src);
}

/*#include <stdio.h>
int	main(void)
{
	char	string1[] = "12345";
	char	string2[] = "67890";
	int		k;

	k = ft_strlcat(string1, string2, 3);
	printf("%s\n", string1);
	printf("Value returned: %d\n", k);
}*/