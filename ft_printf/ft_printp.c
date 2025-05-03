/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:31:32 by adores            #+#    #+#             */
/*   Updated: 2025/05/03 12:15:27 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printp(size_t nb)
{
	const char	*hex = "0123456789abcdef";
	int			count;

	count = 0;
	if (nb >= 16)
		count += ft_printp(nb / 16);
	count += ft_printchar(hex[nb % 16]);
	return (count);
}

int	ft_checkp(size_t nb)
{
	if (!nb)
		return (ft_printstr("(nil)"));
	return (ft_printstr("0x") + ft_printp(nb));
}
/*
int main()
{
	char *str = "abcd";
	void *ptr = (void *)str;

	printf("%p %p", ptr);
	ft_printp(ptr);
}
*/