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

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			write(1, str++, 1);
}

size_t	f_stacklen(char **str)
{
	int i;

	if (!(str))
		return (0)
	i = 0;
	while (*str)
	{
		i++;
		*str++;
	}
	return (i);
}

size_t	f_strlen(char *str)
{
	int i;

	if(!(str))
		return (0);
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*f_malloc(int size, int cnt)
{
	char *tmp;

	tmp = (char *)malloc(size * cnt);
	if (!tmp)
		exit(1);
	return (tmp);
}