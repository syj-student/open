/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/15 01:30:18 by yusong           ###   ########.fr       */
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
void merge(int data[], int *tmp, int p, int q, int r)
{
	int i = p, j = q+1, k = p;
	while(i<=q && j<=r) {
		if(data[i] >= data[j]) tmp[k++] = data[i++];
		else tmp[k++] = data[j++];
	}
	while(i<=q) tmp[k++] = data[i++];
	while(j<=r) tmp[k++] = data[j++];
	for(int a = p; a<=r; a++) data[a] = tmp[a];
}
void mergeSort(int data[], int *ret, int p, int r)
{
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, ret, p , q);
        mergeSort(data, ret, q+1, r);
        merge(data, ret, p, q, r);
    }
}

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	int			sorted[argc - 1];
	int			tmp[argc - 1];
	
	checkvaild(tmp, argc, argv);
	init(&a, &b, tmp, argc);
	mergeSort(tmp, sorted, 0, argc - 2);

	test(a, b);
	sort(&a, &b, sorted, argc - 1);
	test(a, b);

	end(&a, &b);
	return (0);
}
