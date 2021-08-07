/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/08 05:48:56 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	//t_dequeinfo	ainfo;
	//t_dequeinfo	binfo;

	//constinit(&a, &b, &ainfo, &binfo);
	a = NULL;
	fdeque_append(&a, 10);
	fdeque_append(&a, 20);
	fdeque_append(&a, 30);
	
	while (!(a->location & 1))
	{
		printf("%p %p %p %d %d\n", a, a->next, a->prev, a->val, a->location);
		a = a->next;
	}
	printf("%p %p %p %d %d %d\n", a, a->next, a->prev, a->val, a->next->val, a->next->prev->val);
	int i = fdeque_len(b);
	printf("%d\n", i);
	fdeque_free(b);
	return (0);
}