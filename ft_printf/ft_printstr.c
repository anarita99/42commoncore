/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:38:23 by adores            #+#    #+#             */
/*   Updated: 2025/05/01 13:08:11 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

static int	check_str(char *str)
{
	if (!str)
		return (ft_printstr("(null)"));
	else
		return (ft_printstr(str));
}

static int ft_pointmem(size_t nb)
{
	int	count;
	const char *hex = "0123456789abcdef";

	count = 0;
	if (nb > 15)
		count += ft_pointmem(nb / 16);
	count += ft_printchar(hex[nb % 16]);
	return (count);
}

static int check_mem(size_t nb)
{
	if (!nb)
		return (ft_printstr("(nil)"));
	else
		return (ft_printstr("0x") + ft_pointmem(nb));
}

int	handle_format(void *data, char c)
{
	if (c == 's')
		return (check_str((char *)data));
	else
		return (check_mem((size_t)data));
}
/* int main(void)
{
	char *str = "helloo";
	void *p = (void *)str;
	printf("%p\n", p);
	check_mem((size_t)p);
} */