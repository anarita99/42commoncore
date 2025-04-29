/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:40:54 by adores            #+#    #+#             */
/*   Updated: 2025/04/29 15:09:51 by adores           ###   ########.fr       */
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
	if (nb < 0)
	{
		nb = -nb;
		ft_printchar('-');
	}
	if (nb > 10)
	{
		nb = nb / 10;
		ft_printnbr(nb);
	}
	ft_printchar(nb % 10 + 48);
	return (ft_countn(nb));
}
