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

void			fdeque_free(t_deque **head)
{
	t_deque *tmp;
	t_deque *tmp_head;

	tmp_head = *head;
	if (!tmp_head)
		return ;
	while (!(tmp_head->location & 1))
	{
		tmp = tmp_head;
		tmp_head = tmp_head->next;
		free(tmp);
	}
	free(tmp_head);
	f_exit(1);
}

void			fdeque_append(t_deque **head, int val)
{
	t_deque *newdata;

	newdata = (t_deque *)malloc(sizeof(t_deque));
	if (!newdata)
		fdeque_free(head);
	newdata->val = val;
	if (!(*head))
		append_sub_1(head, newdata);
	else
		append_sub_2(head, newdata);
}

static	void	append_sub_1(t_deque **head, t_deque *newdata)
{
	*head = newdata;
	newdata->location = 3;
	newdata->prev = NULL;
	newdata->next = NULL;
}

static	void	append_sub_2(t_deque **head, t_deque *newdata)
{
	t_deque *tmp;

	tmp = *head;
	tmp->prev = newdata;
	newdata->next = tmp;
	while (!(tmp->location & 1))
		tmp = tmp->next;
	tmp->next = newdata;
	newdata->prev = tmp;
	newdata->location = 1;
	tmp->location &= ~1;
}

size_t	fdeque_len(t_deque *head)
{
	size_t cnt;

	if (!head)
		return (0);
	cnt = 1;
	while (head->location & 1)
	{
		head = head->next;
		cnt++;
	}
	return (cnt);
}
