/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:10:01 by adores            #+#    #+#             */
/*   Updated: 2025/05/03 11:50:55 by adores           ###   ########.fr       */
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
	else if (spec == 'i')
		count += ft_printnbr(va_arg(ap, int));
	else if (spec == 'u')
		count += ft_unsputnbr(va_arg(ap, unsigned int));
	else if (spec == 'x')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'x');
	else if (spec == 'X')
		count += ft_hexaputnbr(va_arg(ap, unsigned int), 'X');
	else if (spec == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (spec == 'p')
		count += ft_checkp(va_arg(ap, size_t));
	else if (spec == '%')
		count += ft_printchar('%');
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
			if (format[i + 1] == '\0')
				break ;
			count += print_format(format[++i], list);
		}
		else
			count += ft_printchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
/*int main(void)
{
    int num = 42;

    printf("Testing printf: %d %x", num, num);
    ft_printf("Testing ft_printf: %d %x", num, num);

    return 0;
}*/
