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

void	f_exit(int i)
{
	write(1, "error\n", 6);
	exit(i);
}

size_t	f_stacklen(char **str)
{
	int i;

	if (!(str))
		return (0);
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
	int 	i;

	tmp = (char *)malloc(size * cnt);
	i = 0;
	if (!tmp)
	{
		while (g_malloc[i])
			free(g_malloc[i]);
		f_exit(1);
	}
	while(g_malloc[i])
		i++;
	g_malloc[i] = tmp;
	return (tmp);
}

void	f_cpy(char *dest, char *cpy)
{
	int i;

	i = f_strlen(cpy);
	while (i >= 0)
	{
		dest[i] = cpy[i];
		i--;
	}
}