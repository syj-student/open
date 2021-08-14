/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:29:38 by yusong            #+#    #+#             */
/*   Updated: 2021/08/10 16:29:38 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_sub_4_sub_0(t_deque **a, t_deque **b, int *val, int max)
{
	if (max == val[0])
		sort_sub_4_sub_1(a, b, val, max);
	else if (max == val[1])
		sort_sub_4_sub_2(a, b, val, max);
	else if (max == val[2])
		sort_sub_4_sub_3(a, b, val, max);
	else if (max == val[3])
		sort_sub_4_sub_4(a, b, val, max);
}

void	sort_sub_4_sub_1(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[1] > val[2] && val[1] > val[3])
		sasb(a, 'a');
	else if (val[2] > val[1] && val[2] > val[3])
	{
		pb(a, b);
		sasb(a, 'a');
		pa(a, b);
		if (val[3] > val[1])
			sasb(a, 'a');
	}
	else
	{
		rrarrb(a, 'a');
		sasb(a, 'a');
		rrarrb(a, 'a');
		rrarrb(a, 'a');
		if (val[1] > val[2])
			sasb(a, 'a');
	}
}

void	sort_sub_4_sub_2(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[0] > val[2] && val[0] > val[3])
	{
		pb(a, b);
		pb(a, b);
		if (val[3] > val[2])
			ss(a, b);
		else
			sasb(a, 'a');
		pa(a, b);
		pa(a, b);
	}
	else if (val[2] > val[0] && val[2] > val[3])
	{
		rrarrb(a, 'a');
		if (val[0] > val[3])
			sasb(a, 'a');
	}
	else
	{
		sasb(a, 'a');
		rrarrb(a, 'a');
		if (val[0] > val[2])
			sasb(a, 'a');
	}
}

static void	sort_sub_4_sub_3_sub(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[3] > val[0])
	{
		sasb(a, 'a');
		rrarrb(a, 'a');
		sasb(a, 'a');
		rarb(a, 'a');
	}
	else
	{
		pb(a, b);
		sasb(a, 'a');
		rrarrb(a, 'a');
		pa(a, b);
	}
}

void	sort_sub_4_sub_3(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[0] > val[1] && val[0] > val[3])
	{
		rrarrb(a, 'a');
		sasb(a, 'a');
		rrarrb(a, 'a');
		if (val[1] > val[3])
			sasb(a, 'a');
	}
	else if (val[1] > val[0] && val[1] > val[3])
		sort_sub_4_sub_3_sub(a, b, val, max);
	else
	{
		rrarrb(a, 'a');
		rrarrb(a, 'a');
		if (val[1] > val[0])
			sasb(a, 'a');
	}
}
