/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:28:01 by adores            #+#    #+#             */
/*   Updated: 2025/04/30 14:50:32 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsputnbr(unsigned int n)
{
	int count;

	count = 0;
	if (n >= 10)
		count += ft_unsputnbr(n / 10);
	ft_printchar((n % 10) + '0');
	return (count);
}
