/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:10:01 by adores            #+#    #+#             */
/*   Updated: 2025/05/01 12:20:10 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char spec, va_list ap)
{
	int	count;

	count = 0;
	if (spec == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (spec == 'd')
		count += ft_printnb(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_unsputnbr(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'x');
	else if (spec == 'X')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'X');
	else if (spec == 's')
		count += sortstr(va_arg(ap, char*), 's');
	else if (spec == 'p')
		count += sortstr(va_arg(ap, void*), 'p');
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
			else if (format[i] == 'c')
				count += print_format('c', list);
			else if (format[i] == 'd')
				count += print_format('d', list);
			else if (format[i] == 'u')
				count += print_format('u', list);
			else if (format[i] == 'x')
				count += print_format('x', list);
			else if (format[i] == 'X')
				count += print_format('X', list);
			else if (format[i] == 's')
				count += print_format('s', list);
			else if (format[i] == 'p')
				count += print_format('p', list);
	}
	return (count);
}
