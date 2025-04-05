/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:53:55 by adores            #+#    #+#             */
/*   Updated: 2025/03/13 14:53:55 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    return(0);
}