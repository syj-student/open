/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 03:03:59 by yusong            #+#    #+#             */
/*   Updated: 2021/08/08 03:03:59 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	push_sub(t_deque **dest, t_deque *something)
{
	t_deque	*head;
	t_deque	*end;

	head = *dest;
	if (!something)
		return (0);
	if (!head)
	{
		something->prev = something;
		something->next = something;
		*dest = something;
	}
	else
	{
		end = head->prev;
		something->end = 1;
		end->end = 0;
		end->next = something;
		something->next = head;
		head->prev = something;
		something->prev = end;
	}
	return (1);
}

void	pa(t_deque **a, t_deque **b)
{
	char	flag;

	flag = push_sub(a, fdeque_pop(b));
	if (flag)
		write(1, "pa\n", 3);
}

void	pb(t_deque **a, t_deque **b)
{
	char	flag;

	flag = push_sub(b, fdeque_pop(a));
	if (flag)
		write(1, "pb\n", 3);
}

int	sasb(t_deque **a, int c)
{
	t_deque	*head;
	t_deque	*end;
	int		tmp;

	head = *a;
	if (!head || head->end)
		return (0);
	end = head->prev;
	head = end->prev;
	tmp = end->val;
	end->val = head->val;
	head->val = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
	return (1);
}

void	ss(t_deque **a, t_deque **b)
{
	char	flag;
	char	flag2;

	flag = sasb(a, 's');
	flag2 = sasb(b, 's');
	if (flag && flag2)
		write(1, "ss\n", 3);
	else if (flag)
		write(1, "sa\n", 3);
	else if (flag2)
		write(1, "sb\n", 3);
}
