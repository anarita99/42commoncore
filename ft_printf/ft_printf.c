/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:10:01 by adores            #+#    #+#             */
/*   Updated: 2025/05/01 13:05:27 by adores           ###   ########.fr       */
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
		count += ft_printnbr(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_unsputnbr(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'x');
	else if (spec == 'X')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'X');
	else if (spec == 's')
		count += handle_format(va_arg(ap, char*), 's');
	else if (spec == 'p')
		count += handle_format(va_arg(ap, void*), 'p');
	else
		count += ft_printchar('%') + ft_printchar(spec);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;
	int		i;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	count = 0;
	i = 0;
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += print_format(format[i], list);
		}
		else
			count += ft_printchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
int main(void)
{
	char str[] = "Hell0";
	printf("%s\n", str);
	ft_printf("%s\n", str);
}