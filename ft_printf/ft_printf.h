/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:10:24 by adores            #+#    #+#             */
/*   Updated: 2025/05/01 11:06:12 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_printnbr(long nb);
int	ft_unsputnbr(unsigned int n);
int	ft_hexaputnbr(unsigned int i, unsigned char c);
int	sortstr(void *data, char c);

#endif