/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 22:19:00 by yusong            #+#    #+#             */
/*   Updated: 2021/07/19 22:19:00 by yusong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>

# define whitespace(c) (c == 32 || (9 <= c && c <= 13))

typedef	struct	s_deque
{
	int			val;
	t_deque		prev;
	t_deque		next;
}				t_deque;

typedef	struct	s_dequeinfo
{
	int			len;
	t_deque		head;
}				t_dequeinfo;


/*
**	utils_1.c
*/
void			constinit(t_deque **a, t_deque **b, t_dequeinfo *ainfo, t_dequeinfo *binfo);


/*
**	utils_2.c
*/
size_t	f_atoi(char *str);

/*
**	utils_2.c
*/


# endif