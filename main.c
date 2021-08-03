/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:14:12 by yusong            #+#    #+#             */
/*   Updated: 2021/08/02 22:17:35 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	char	**tmp;
	int		stacklen;
	int		*stackA;
	int		*stackB;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		stacklen = f_stacklen(tmp);
	}
	else
		stacklen = argc - 1;
	stackA = f_malloc(sizeof(int), stacklen);
	stackB = f_malloc(sizeof(int), stacklen);
	return (0);
}