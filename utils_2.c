/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:27:57 by yusong            #+#    #+#             */
/*   Updated: 2021/08/06 19:27:57 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	f_atoi(char *str)
{
	size_t sign;
	size_t ret;

	sign = 1;
	ret = 0;
	if (!(str) || !(*str))
		return (0);
	while (whitespace(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	while (*str)
	{
		if (!(whitespace(*str)))
			f_exit(1);
		str++;
	}
	return (sign * ret);
}
