/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:19:48 by adores            #+#    #+#             */
/*   Updated: 2025/04/15 14:59:21 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	int				start;
	char			**arr;

	arr = malloc(sizeof(char) * (count_words(s, c)+1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		start = i
	}
	
	
}
static int	count_words(char *str, char sep)
{
	int count;
	int inword;
	int	i;

	inword = 0;
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