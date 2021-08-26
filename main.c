/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/26 10:16:19 by yusong           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	int			sorted[argc - 1];
	int			tmp[argc - 1];
	
	checkvaild(tmp, argc, argv);
	init(&a, &b, tmp, argc);
	sort(&a, &b, argc - 1);
	test(a, b);

	end(&a, &b);
	return (0);
}
