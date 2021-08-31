/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:27:57 by yusong            #+#    #+#             */
/*   Updated: 2021/08/06 19:27:57 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	whitespace(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	else
		return (0);
}

int	f_atoi(char *str)
{
	long long	sign;
	long long	ret;

	sign = 1;
	ret = 0;
	if (!(str) || !(*str))
		f_exit(0);
	while (whitespace(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (!('0' <= *str && *str <= '9'))
		f_exit(0);
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	ret *= sign;
	if (*str || !(-2147483648 <= ret && ret <= 2147483647))
		f_exit(0);
	return (ret);
}

t_deque	*fdeque_pop(t_deque **head)
{
	t_deque	*ret;
	t_deque	*tmp;

	tmp = *head;
	if (!tmp)
		return (0);
	if (tmp->end)
	{
		*head = NULL;
		return (tmp);
	}
	ret = tmp->prev;
	ret->prev->end = 1;
	ret->prev->next = ret->next;
	ret->next->prev = ret->prev;
	return (ret);
}

int	fdeque_max(t_deque **a)
{
	t_deque	*tmp;
	int		max;

	tmp = *a;
	max = tmp->val;
	while (!(tmp->end))
	{
		if (tmp->val > max)
			max = tmp->val;
		tmp = tmp->next;
	}
	if (tmp->val > max)
		max = tmp->val;
	return (max);
}

int	fdeque_min(t_deque **a)
{
	t_deque	*tmp;
	int		max;

	tmp = *a;
	max = tmp->val;
	while (!(tmp->end))
	{
		if (tmp->val < max)
			max = tmp->val;
		tmp = tmp->next;
	}
	if (tmp->val < max)
		max = tmp->val;
	return (max);
}