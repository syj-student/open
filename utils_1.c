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

void		f_exit(int i)
{
	write(1, "Error\n", 6);
	exit(i);
}

size_t		f_stacklen(char **str)
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

size_t		f_strlen(char *str)
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

int			*f_setmalloc(int stack[][2], int cnt)
{
	stack[0] = (int *)malloc(sizeof(int) * cnt);
	if (!(stack[0]))
		f_exit(1);
	stack[1] = (int *)malloc(sizeof(int) * cnt);
	if (!(stack[1]))
	{
		free(stack[0]);
		f_exit(1);
	}
}

void		f_cpy(char *dest, char *cpy)
{
	int i;

	i = f_strlen(cpy);
	while (i >= 0)
	{
		dest[i] = cpy[i];
		i--;
	}
}