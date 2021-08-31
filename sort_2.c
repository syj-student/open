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

void	sort_sub_5(t_deque **a, t_deque **b, int len)
{
	int		tmp[2];
	t_deque	*tmp_a;

	tmp_a = (*a)->prev;
	tmp[0] = fdeque_max(a);
	tmp[1] = fdeque_min(a);
	while (len--)
	{
		if (tmp_a->val == tmp[0] || tmp_a->val == tmp[1])
			pb(a, b);
		else
			rarb(a, 'a');
		tmp_a = (*a)->prev;
	}
	sort_sub_3(a);
	pa(a, b);
	pa(a, b);
	if ((*a)->prev->val < (*a)->prev->prev->val)
		sasb(a, 'a');
	rarb(a, 'a');
}

void		fdeque_pivot(t_deque **a, int *pivot, int len)
{
	int		i;
	int		tmp_lst[500];
	t_deque	*tmp_a;

	tmp_a = (*a)->prev;
	i = -1;
	while (i++ < len - 1)
	{
		tmp_lst[i] = tmp_a->val;
		tmp_a = tmp_a->prev;
	}
	merge_sort(tmp_lst, 0, len - 1);
	i = len * 0.34;
	pivot[0] = tmp_lst[i];
	i = len * 0.34 * 2;
	pivot[1] = tmp_lst[i];
}

void	sort_rec_sub(t_deque **a, t_deque **b, int len)
{
	int	pivot[2];
	int	cnt[3];
	int	tmp;

	if (len <= 2)
	{
		if (len == 2 && (*b)->prev->val < (*b)->prev->prev->val)
			sasb(b, 'b');
		while (0 < len--)
			pa(a, b);
		return ;
	}
	else
	{
		cnt[0] = 0;
		cnt[1] = 0;
		cnt[2] = 0;
		fdeque_pivot(b, pivot, len);
		while (len--)
		{
			if (pivot[1] <= (*b)->prev->val)
			{
				pa(a, b);
				cnt[0]++;
			}
			else if (pivot[0] <= (*b)->prev->val)
			{
				pa(a, b);
				rarb(a, 'a');
				cnt[1]++;
			}
			else
			{
				rarb(b, 'b');
				cnt[2]++;
			}
		}
		sort_rec_2(a, b, cnt[0]);
		tmp = cnt[1];
		while (0 < tmp--)
			rrarrb(a, 'a');
		sort_rec_2(a, b, cnt[1]);
		tmp = cnt[2];
		while (0 < tmp--)
			rrarrb(b, 'b');
		sort_rec_sub(a, b, cnt[2]);
	}
}

void	sort_rec_2(t_deque **a, t_deque **b, int len)
{
	int	pivot[2];
	int	cnt[3];
	int	tmp;

	if (len <= 2)
	{
		if (len == 2 && (*a)->prev->val > (*a)->prev->prev->val)
			sasb(a, 'a');
		return ;
	}
	else
	{
		cnt[0] = 0;
		cnt[1] = 0;
		cnt[2] = 0;
		fdeque_pivot(a, pivot, len);
		while (len--)
		{
			if (pivot[1] <= (*a)->prev->val)
			{
				rarb(a, 'a');
				cnt[0]++;
			}
			else if (pivot[0] <= (*a)->prev->val)
			{
				pb(a, b);
				cnt[1]++;
			}
			else
			{
				pb(a, b);
				rarb(b, 'b');
				cnt[2]++;
			}
		}
		tmp = cnt[0];
		while (0 < tmp--)
			rrarrb(a, 'a');
		sort_rec_2(a, b, cnt[0]);
		sort_rec_sub(a, b, cnt[1]);
		tmp = cnt[2];
		while (0 < tmp--)
			rrarrb(b, 'b');
		sort_rec_sub(a, b, cnt[2]);
	}

}

void	sort_rec(t_deque **a, t_deque **b, int len)
{
	int	pivot[2];
	int	cnt[3];
	int	tmp;

	if (len <= 2)
	{
		if (len == 2 && (*a)->prev->val > (*a)->prev->prev->val)
			sasb(a, 'a');
		return ;
	}
	else
	{
		cnt[0] = 0;
		cnt[1] = 0;
		cnt[2] = 0;
		fdeque_pivot(a, pivot, len);
		while (len--)
		{
			if (pivot[1] <= (*a)->prev->val)
			{
				rarb(a, 'a');
				cnt[0]++;
			}
			else if (pivot[0] <= (*a)->prev->val)
			{
				pb(a, b);
				cnt[1]++;
			}
			else
			{
				pb(a, b);
				rarb(b, 'b');
				cnt[2]++;
			}
		}
		sort_rec(a, b, cnt[0]);
		sort_rec_sub(a, b, cnt[1]);
		tmp = fdeque_len(b);
		if (tmp != len)
		{
			tmp = cnt[2];
			while (0 <tmp--)
				rrarrb(b, 'b');
		}
		sort_rec_sub(a, b, cnt[2]);
	}

}