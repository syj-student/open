/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:34:59 by yusong            #+#    #+#             */
/*   Updated: 2021/08/09 19:34:59 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	rarb(t_deque **a, char c)
{
	t_deque	*head;
	t_deque	*end;

	head = *a;
	if (!head || head->end)
		return (0);
	end = head->prev;
	*a = end;
	end->end = 0;
	end->prev->end = 1;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
	return (1);
}

void	rr(t_deque **a, t_deque **b)
{
	char	flag;
	char	flag2;

	flag = rarb(a, 'r');
	flag2 = rarb(b, 'r');
	if (flag && flag2)
		write(1, "rr\n", 3);
	else if (flag)
		write(1, "ra\n", 3);
	else if (flag2)
		write(1, "rb\n", 3);
}

int	rrarrb(t_deque **a, char c)
{
	t_deque	*head;
	t_deque	*end;

	head = *a;
	if (!head || head->end)
		return (0);
	end = head->prev;
	*a = head->next;
	end->end = 0;
	head->end = 1;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
	return (1);
}

void	rrr(t_deque **a, t_deque **b)
{
	char	flag;
	char	flag2;

	flag = rrarrb(a, 'r');
	flag2 = rrarrb(b, 'r');
	if (flag && flag2)
		write(1, "rrr\n", 4);
	else if (flag)
		write(1, "rra\n", 4);
	else if (flag2)
		write(1, "rrb\n", 4);
}
