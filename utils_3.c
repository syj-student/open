/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:04:44 by yusong            #+#    #+#             */
/*   Updated: 2021/08/06 20:04:44 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	fdeque_free(t_deque *head)
{
	t_deque	*tmp;

	if (!head)
		return ;
	while (!(head->end))
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}

static void	append_sub_1(t_deque **head, t_deque *newdata)
{
	*head = newdata;
	newdata->end = 1;
	newdata->prev = newdata;
	newdata->next = newdata;
}

static void	append_sub_2(t_deque *head, t_deque *newdata)
{
	t_deque	*tmp;

	tmp = head->prev;
	head->prev = newdata;
	newdata->next = head;
	tmp->next = newdata;
	newdata->prev = tmp;
	newdata->end = 1;
	tmp->end = 0;
}

void	fdeque_append(t_deque **head, int val)
{
	t_deque	*newdata;

	newdata = (t_deque *)malloc(sizeof(t_deque));
	if (!newdata)
	{
		fdeque_free(*head);
		f_exit(1);
	}
	newdata->val = val;
	if (!(*head))
		append_sub_1(head, newdata);
	else
		append_sub_2(*head, newdata);
}

size_t	fdeque_len(t_deque *head)
{
	size_t	cnt;

	if (!head)
		return (0);
	cnt = 1;
	while (!(head->end & 1))
	{
		head = head->next;
		cnt++;
	}
	return (cnt);
}
