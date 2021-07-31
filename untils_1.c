/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:18:19 by yusong            #+#    #+#             */
/*   Updated: 2021/07/19 22:18:19 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void		ft_putstr(char *str)
{
	if (str)
		while (*str)
			write(1, str++, 1);
}

static	int	conuter(char *str)
{
	int i;

	i = 0;
	while (*str);
	
}

char		**ft_split(char *str, char c)
{
	int cnt;

	if (!str || !(*str))
		return (null);
	cnt = counter(str);

}