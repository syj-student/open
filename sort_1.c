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
		if (val[1] > val[2]);
		else
			sasb(a, 'a');
	else if (max == val[1])
		if (val[0] > val[1])
		{
			sasb(a, 'a');
			rarb(a, 'a');
		}
		else
		{
			rrarrb(a, 'a');
			sasb(a, 'a');
		}
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

void	sort_sub_4(t_deque **a, t_deque **b)
{

}

void	sort_sub_5(t_deque **a, t_deque **b)
{

}
