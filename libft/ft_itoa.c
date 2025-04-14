/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:17:13 by adores            #+#    #+#             */
/*   Updated: 2025/04/14 16:55:27 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static long	ft_countn(long n)
{
	long	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	char	*numstr;
	int		i;
	int		countnum;
	
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	numstr = (char *)malloc(sizeof(char) * (ft_countn(n) + 1));
	
}
#include <stdio.h>
int main(void)
{
	int i = -10;
	printf("%d\n", ft_countn(i));
}
