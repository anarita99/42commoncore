/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:40:54 by adores            #+#    #+#             */
/*   Updated: 2025/05/01 15:20:45 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countn(long n)
{
	int	countn;

	countn = 0;
	if (n < 0)
		countn++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		countn++;
	}
	return (countn);
}

int	ft_printnbr(long nb)
{
	int	i;

	i = ft_countn(nb);
	if (nb < 0)
	{
		nb = -nb;
		ft_printchar('-');
	}
	if (nb >= 10)
	{
		nb = nb / 10;
		ft_printnbr(nb);
	}
	ft_printchar(nb % 10 + 48);
	return (i);
}
