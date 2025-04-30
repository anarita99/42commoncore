/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:10:01 by adores            #+#    #+#             */
/*   Updated: 2025/04/30 11:49:56 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (spec == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (spec == 'd')
		count += ft_printnb(va_arg(ap, int));
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (!format)
		return (0);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
			i++;
			if (format[i] == '%')
				count += ft_printchar('%');
	}
	return (count);
}
