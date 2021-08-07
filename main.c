/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/07 16:49:10 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

#include <stdio.h>
void	printtest(t_deque *deque, t_dequeinfo *ainfo)
{
	int i;

	i = 0;
	printf("info %d %d %d\n", ainfo->top, ainfo->bot, ainfo->len);
	while (deque[i].onoff && i < ainfo->len)
	{
		printf("%d %d\n", i, deque[i].val);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	t_dequeinfo	ainfo;
	t_dequeinfo	binfo;

	constinit(&a, &b, &ainfo, &binfo);

	
	return (0);
}