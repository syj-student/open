/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/31 22:36:31 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	int			tmp[argc - 1];
	
	checkvaild(tmp, argc, argv);
	init(&a, &b, tmp, argc);
	sort(&a, &b, argc - 1);
	end(&a, &b);
	return (0);
}

void	merge_sort(int *lst, int start, int end)
{
	int	mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(lst, start, mid);
		merge_sort(lst, mid + 1, end);
		merge_sort_sub(lst, start, mid, end);
	}
}

void	merge_sort_sub(int *lst, int start, int mid , int end)
{
	int	i;
	int	j;
	int	k;
	int	tmp;
	int	new_lst[500];

	i = start;
	j = mid + 1;
	k = start;
	while (i <= mid && j <= end)
	{
		if (lst[i] <= lst[j])
			new_lst[k++] = lst[i++];
		else
			new_lst[k++] = lst[j++];
	}
	while (i <= mid)
		new_lst[k++] = lst[i++];
	while (j <= end)
		new_lst[k++] = lst[j++];
	tmp = start;
	while (tmp <= end)
	{
		lst[tmp] = new_lst[tmp];
		tmp++;
	}
}
