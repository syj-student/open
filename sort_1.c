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

static void	sort_sub_2(t_deque **a)
{

	if ((*a)->val > (*a)->next->val)
		end(a, b);
	sasb(a, 'a');
	end(a, b);
}

static void	sort_sub_3(t_deque **a)
{

}

static void	sort_sub_4(t_deque **a)
{

}

static void	sort_sub_5(t_deque **a)
{

}

void	sort(t_deque **a, t_deque **b)
{
	int len;

	len = fdeque_len(*a);
	if (len == 2)
		sort_sub_2(a);
	else if (len == 3)
		sort_sub_3(a);
	else if (len == 4)
		sort_sub_4(a);
	else if (len == 5)
		sort_sub_5(a);
	else
		sort_sub_4(a);
}