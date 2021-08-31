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

void	rewind(t_deque **a, char c, int len)
{
	while (0 < len--)
		rrarrb(a, c);
}

static void	sort_rec_20(t_deque **a, t_deque **b, int len, int *cnt)
{
	int	pivot[2];

	set_zero(cnt);
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
}

void	sort_rec_2(t_deque **a, t_deque **b, int len)
{
	int	cnt[3];

	if (len <= 2)
	{
		if (len == 2 && (*a)->prev->val > (*a)->prev->prev->val)
			sasb(a, 'a');
		return ;
	}
	else
	{
		sort_rec_20(a, b, len, cnt);
		rewind(a, 'a', cnt[0]);
		sort_rec_2(a, b, cnt[0]);
		sort_rec_sub(a, b, cnt[1]);
		rewind(b, 'b', cnt[2]);
		sort_rec_sub(a, b, cnt[2]);
	}
}

static void	sort_rec0(t_deque **a, t_deque **b, int len, int *cnt)
{
	int	pivot[2];

	set_zero(cnt);
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
}

void	sort_rec(t_deque **a, t_deque **b, int len)
{
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
		sort_rec0(a, b, len, cnt);
		sort_rec(a, b, cnt[0]);
		sort_rec_sub(a, b, cnt[1]);
		tmp = fdeque_len(*b);
		if (tmp != len)
			rewind(b, 'b', cnt[2]);
		sort_rec_sub(a, b, cnt[2]);
	}
}
