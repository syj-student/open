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

// test
# include <stdio.h>

# define whitespace(c) (c == 32 || (9 <= c && c <= 13))

typedef	struct		s_deque
{
	int				val;
	char			location;
	struct	s_deque	*prev;
	struct	s_deque	*next;
}					t_deque;

/*
**	utils_1.c
*/
void				f_exit(int i);

/*
**	utils_2.c
*/
size_t				f_atoi(char *str);

/*
**	utils_3.c
*/
void				fdeque_free(t_deque *head);
void				fdeque_append(t_deque **head, int val);
static	void		append_sub_1(t_deque **head, t_deque *newdata);
static	void		append_sub_2(t_deque **head, t_deque *newdata);
size_t				fdeque_len(t_deque *head);

/*
**	utils_4.c
*/

# endif