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

void	init(t_deque **a, t_deque **b, int *tmp, int len)
{
	*a = NULL;
	*b = NULL;
	while (1 < len--)
		fdeque_append(a, tmp[len - 1]);
}

void	f_exit(int i)
{
	write(1, "Error\n", 6);
	exit(i);
}

void	checkvaild(int *tmp, int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc - 1)
	{
		tmp[i] = f_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i <argc - 2)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (tmp[i] == tmp[j])
				f_exit(1);
			j++;
		}
		i++;
	}
}
