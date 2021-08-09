/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/09 21:23:53 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	test(t_deque *a, t_deque *b)
{
	printf("=====a=====\n");
	if (!a)
	{
		printf("NULL\n");
	}
	else
	{
		while (!(a->end))
		{
			printf("%d\n", a->val);
			a = a->next;
		}
		printf("%d\n", a->val);
	}
	printf("=====b=====\n");
	if (!b)
	{
		printf("NULL\n");
	}
	else
	{
		while (!(b->end))
		{
			printf("%d\n", b->val);
			b = b->next;
		}
		printf("%d\n", b->val);
	}
	printf("===========\n\n");
}
void	test2(t_deque **a, t_deque **b)
{
	sasb(a, 'a');
	pb(a, b);
	pb(a, b);
	pb(a, b);
	sasb(a, 'a');
	pa(a, b);
	pa(a, b);
	pa(a, b);
	pa(a, b);
}
int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	int			tmp[argc - 1];
	
	checkvaild(tmp, argc, argv);
	init(&a, &b, tmp, argc);
	//test(a, b);

	test2(&a, &b);

	//test(a, b);
	return (0);
}