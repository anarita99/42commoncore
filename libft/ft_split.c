/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:19:48 by adores            #+#    #+#             */
/*   Updated: 2025/04/16 17:22:05 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char sep)
{
	int count;
	int inword;
	int	i;

	count = 0;
	inword = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep)
		{
			if (inword == 0)
			{
				inword = 1;
				count++;
			}
		}
		else
			inword = 0;
		i++;
	}
	return (count);
}
static char	*malloc_word(char *s,  char c)
{
	int		len; //tamanho da palavra
	char	*word;

	len = 0;
	while(s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}
char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	word_i;
	char			**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	word_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			arr[word_i++] = malloc_word((char *)&s[i], c);
			while(s[i] && s[i] != c)
				i++;
		}
	}
	arr[word_i] = NULL;
	return (arr);
}
/* #include <stdio.h>

int	main(void)
{
	char const s[] = ",Heelo, world, hello";
	char c = ',';
	int i = 0;
	char **res = ft_split(s, c);
	while(res[i])
	{
		printf("%s",res[i]);
		i++;
	}
} */
