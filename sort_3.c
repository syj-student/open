/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:59:37 by yusong            #+#    #+#             */
/*   Updated: 2021/08/13 00:59:37 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	sort_sub_4_sub_4_sub(t_deque **a, t_deque **b, int *val, int max)
{
	sasb(a, 'a');
	pb(a, b);
	sasb(a, 'a');
	if (val[0] > val[2])
	{
		rrarrb(a, 'a');
		pa(a, b);
	}
	else
	{
		pa(a, b);
		rrarrb(a, 'a');
	}
}

void	sort_sub_4_sub_4(t_deque **a, t_deque **b, int *val, int max)
{
	if (val[0] > val[1] && val[0] > val[2])
	{
		rarb(a, 'a');
		if (val[2] > val[1])
			sasb(a, 'a');
	}
	else if (val[1] > val[0] && val[1] > val[2])
		sort_sub_4_sub_4_sub(a, b, val, max);
	else
	{
		sasb(a, 'a');
		rarb(a, 'a');
		rarb(a, 'a');
		if (val[1] > val[0])
			sasb(a, 'a');
	}
}

void	sort_sub_4(t_deque **a, t_deque **b)
{
	t_deque	*tmp_a;
	int		val[4];
	int		max;

	tmp_a = *a;
	max = 0;
	while (max < 4)
	{
		val[max] = tmp_a->val;
		tmp_a = tmp_a->next;
		max++;
	}
	max = fdeque_max(a);
	sort_sub_4_sub_0(a, b, val, max);
}


void	tmp1(t_deque **a, t_deque **b, int len)
{
	int	cnt[3];
	int	pivot[2];
	int	tmp;

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	if (len <= 2)
	{
		if (len == 1)
			pa(a, b);
		if (len == 2)
		{
			pa(a, b);
			pa(a, b);
			if ((*a)->prev->val > (*a)->prev->prev->val)
				sasb(a, 'a');
		}
		return ;
	}
	else
	{
		pivot[0] = fdeque_index(b, len * 0.34);
		pivot[1] = fdeque_index(b, len * 0.34 * 2);
		if (pivot[0] > pivot[1])
		{
			tmp = pivot[0];
			pivot[0] = pivot[1];
			pivot[1] = tmp;
		}
		while (len--)
		{
			if ((*b)->prev->val >= pivot[0])
			{
				pa(a, b);
				cnt[2]++;
				if (pivot[0] > (*a)->prev->val)
				{
					cnt[1]++;
					cnt[2]--;
					rarb(a, 'a');
				}
			}
			else
			{
				rarb(b, 'b');
				cnt[0]++;
			}
		}
	}
	tmp = cnt[0];
	while (tmp--)
		rrarrb(b, 'b');
	tmp3(a, b, cnt[2]);
	tmp = cnt[1];
	while (tmp--)
		rrarrb(a, 'a');
	tmp3(a, b, cnt[1]);
	tmp1(a, b, cnt[0]);
}

void	tmp3(t_deque **a, t_deque **b, int len)
{
	int	cnt[3];
	int	pivot[2];
	int	tmp;

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	if (len <= 2)
	{
		if (len == 2 && (*a)->prev->val > (*a)->prev->prev->val)
			sasb(a, 'a');
		return ;
	}
	else
	{
		pivot[0] = fdeque_index(a, len * 0.34);
		pivot[1] = fdeque_index(a, len * 0.34 * 2);
		if (pivot[0] > pivot[1])
		{
			tmp = pivot[0];
			pivot[0] = pivot[1];
			pivot[1] = tmp;
		}
		while (len--)
		{
			if ((*a)->prev->val >= pivot[1])
			{
				rarb(a, 'a');
				cnt[2]++;
			}
			else
			{
				cnt[1]++;
				pb(a, b);
				if (pivot[0] > (*b)->prev->val)
				{
					rarb(b, 'b');
					cnt[1]--;
					cnt[0]++;
				}
			}
		}
	}
	tmp = cnt[2];
	while (tmp--)
		rrarrb(a, 'a');
	tmp3(a, b, cnt[2]);
	tmp1(a, b, cnt[1]);
	tmp = cnt[0];
	while (tmp--)
		rrarrb(b, 'b');
	tmp1(a, b, cnt[0]);
}

void	sort_sub_5(t_deque **a, t_deque **b, int len)
{
	int	cnt[3];
	int	pivot[2];
	int	tmp;

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	if (len <= 2)
	{
		if (len == 2 && (*a)->val < (*a)->next->val)
			sasb(a, 'a');
		return ;
	}
	else
	{
		pivot[0] = fdeque_index(a, len * 0.34);
		pivot[1] = fdeque_index(a, len * 0.34 * 2);
		if (pivot[0] > pivot[1])
		{
			tmp = pivot[0];
			pivot[0] = pivot[1];
			pivot[1] = tmp;
		}
		while (len--)
		{
			if ((*a)->prev->val >= pivot[1])
			{
				rarb(a, 'a');
				cnt[2]++;
			}
			else
			{
				cnt[1]++;
				pb(a, b);
				if (pivot[0] > (*b)->prev->val)
				{
					rarb(b, 'b');
					cnt[1]--;
					cnt[0]++;
				}
			}
		}
	}
	sort_sub_5(a, b, cnt[2]);
	tmp1(a, b, cnt[1]);
	if (fdeque_len(*b) != cnt[0])
	{
		tmp = cnt[0];
		while (tmp--)
			rrarrb(b, 'b');
	}
	tmp1(a, b, cnt[0]);
}
