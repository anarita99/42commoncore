/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:44:00 by adores            #+#    #+#             */
/*   Updated: 2025/04/11 18:29:21 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <limits.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(char c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int c);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strrchr(const char *str, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif