/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/09/01 02:05:30 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_deque		*a;
	t_deque		*b;
	int			*tmp;

	tmp = (int *)int_malloc(argc - 1);
	checkvaild(tmp, argc, argv);
	init(&a, &b, tmp, argc);
	free(tmp);
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

static void	merge_sort_sub_sub(int *lst, int *new_lst, int *i)
{
	while (i[0] <= i[3] && i[1] <= i[4])
	{
		if (lst[i[0]] <= lst[i[1]])
			new_lst[i[2]++] = lst[i[0]++];
		else
			new_lst[i[2]++] = lst[i[1]++];
	}
	while (i[0] <= i[3])
		new_lst[i[2]++] = lst[i[0]++];
	while (i[1] <= i[4])
		new_lst[i[2]++] = lst[i[1]++];
}

void	merge_sort_sub(int *lst, int start, int mid, int end)
{
	int	i[5];
	int	tmp;
	int	*new_lst;

	new_lst = int_malloc(end + 1);
	i[0] = start;
	i[1] = mid + 1;
	i[2] = start;
	i[3] = mid;
	i[4] = end;
	merge_sort_sub_sub(lst, new_lst, i);
	tmp = start;
	while (tmp <= end)
	{
		lst[tmp] = new_lst[tmp];
		tmp++;
	}
	free(new_lst);
}

int	*int_malloc(int cnt)
{
	int	*ret;

	ret = (int *)malloc(sizeof(int) * cnt);
	if (!ret)
		exit(1);
	return (ret);
}
