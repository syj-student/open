/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_6.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:23:47 by yusong            #+#    #+#             */
/*   Updated: 2021/08/10 16:23:47 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort(t_deque **a, t_deque **b)
{
	int len;

	len = fdeque_len(*a);
	if (len == 2)
		sort_sub_2(a);
	else if (len == 3)
		sort_sub_3(a);
	else if (len == 4)
		sort_sub_4(a, b);
	else if (len == 5)
		sort_sub_5(a, b);
	else
		sort_sub_5(a, b);
}

void	sort_sub_2(t_deque **a)
{

	if ((*a)->val > (*a)->next->val)
		return ;
	sasb(a, 'a');
	return ;
}

static void	sort_sub_3_sub(int *val, int max, t_deque **a)
{
	if (max == val[0])
		sasb(a, 'a');
	else if (max == val[1])
		if (val[0] > val[2])
		{
			sasb(a, 'a');
			rarb(a, 'a');
		}
		else
			rrarrb(a, 'a');
	else
		if (val[0] > val[1])
			rarb(a, 'a');
		else
		{
			rarb(a, 'a');
			sasb(a, 'a');
		}
}

void	sort_sub_3(t_deque **a)
{
	int val[3];
	int max;

	max = fdeque_max(a);
	val[0] = (*a)->val;
	val[1] = (*a)->next->val;
	val[2] = (*a)->next->next->val;
	sort_sub_3_sub(val, max, a);
}
