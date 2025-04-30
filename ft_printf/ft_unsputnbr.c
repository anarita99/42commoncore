/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:28:01 by adores            #+#    #+#             */
/*   Updated: 2025/04/30 11:57:45 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unscount(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_unsputnbr(unsigned int n)
{
	if (n > 9)
	{
		ft_unsputnbr(n / 10);
		ft_unsputnbr(n % 10);
	}
	else
		ft_printchar(n + 48);
	return (ft_unscount(n));
}
