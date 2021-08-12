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
	//end(a, b);
}