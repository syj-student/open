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

void	sub(t_deque **a, t_deque **b, int cnt)
{
	int		i;
	int		cnt2;
	int		cnt3;
	int		middle;
	t_deque	*tmp;

	//test(*a, *b);
	//printf("sub %d\n", cnt);
	if (cnt == 0)
		return ;
	tmp = (*b)->prev;
	if (cnt == 1)
		pa(a, b);
	else if (cnt == 2)
	{
		if (tmp->val < tmp->prev->val)
			sasb(b, 'b');
		pa(a, b);
		pa(a, b);
	}
	else
	{
		i = (cnt / 2);
		while (i--)
			tmp = tmp->prev;
		middle = tmp->val;
		tmp = (*b)->prev;
		cnt2 = 0;
		cnt3 = 0;
		while (cnt--)
		{
			if ((*b)->prev->val >= middle)
			{
				pa(a, b);
				cnt2++;
			}
			else
			{
				rarb(b, 'b');
				cnt3++;
			}
		}
		middle = cnt3;
		while (cnt3--)
			rrarrb(b, 'b');
		sub2(a, b, cnt2);
		sub(a, b, middle);
	}
}

void	sub2(t_deque **a, t_deque **b, int cnt2)
{
	t_deque	*tmp;
	int		cnt1;
	int		cnt3;
	int		cnt_tmp;
	int		middle;
	if (cnt2 == 0)
		return ;
	tmp = (*a)->prev;
	if (cnt2 == 1)
		return ;
	else if (cnt2 == 2)
	{
		if (tmp->val > tmp->prev->val)
			sasb(a, 'a');
	}
	else
	{
		cnt_tmp = (cnt2 / 2);
		while (cnt_tmp--)
			tmp = tmp->prev;
		middle = tmp->val;
		tmp = (*a)->prev;
		cnt1 = 0;
		cnt3 = 0;
		while (cnt2--)
		{
			if ((*a)->prev->val <= middle)
			{
				pb(a, b);
				cnt1++;
			}
			else
			{
				rarb(a, 'a');
				cnt3++;
			}
		}
		middle = cnt3;
		while (cnt3--)
			rrarrb(a, 'a');
		sub2(a, b, middle);
		sub(a, b, cnt1);
	}
}

void	sort_sub_5(t_deque **a, t_deque **b, int *sorted, int len)
{
	int	middle;
	int	len2;
	int cnt;

	len2 = fdeque_len(*a);
	if (len2 < 2)
	{
		if (len2 == 2 && (*a)->val < (*a)->next->val)
			sasb(a, 'a');
		return ;
	}
	middle = len / 2;
	cnt = 0;
	while (len2)
	{
		if ((*a)->prev->val <= sorted[middle])
		{
			pb(a, b);
			cnt++;
		}
		else
			rarb(a, 'a');
		len2--;
	}
	sort_sub_5(a, b, sorted, len / 2);
	sub(a, b, cnt);
}
