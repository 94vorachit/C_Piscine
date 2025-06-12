/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vorhansa <vorhansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:05:26 by vorhansa          #+#    #+#             */
/*   Updated: 2025/06/11 14:01:04 by vorhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (!ft_is_charset(str[i], sep))
		{
			words++;
			while (str[i] && !ft_is_charset(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*ft_splitter(char *str, char *sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], sep))
		i++;
	word = (char *) malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !ft_is_charset(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) \
* (ft_count_words(str, charset) + 1));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!ft_is_charset(str[i], charset))
		{
			words[j] = ft_splitter(&str[i], charset);
			while (str[i] && !ft_is_charset(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "Words to.be/splitted*in@six";
// 	char	*sep = "./*@! ";
// 	char	**words = ft_split(str, sep);
// 	int i = 0;

// 	printf("-------------------------------------------------\n");
// 	printf("Before: [%s]\nSplitter: [%s]\nAfter: \n", str, sep);
// 	while (words[i])
// 	{
// 		printf("words[%d] : %s\n", i, words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	printf("-------------------------------------------------\n");
// 	free(words);
// }