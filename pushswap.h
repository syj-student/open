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

typedef struct s_deque
{
	int				val;
	char			end;
	struct s_deque	*prev;
	struct s_deque	*next;
}					t_deque;

/*
**	main.c 					/ 2
*/
void	merge_sort(int *lst, int start, int end);
void	merge_sort_sub(int *lst, int start, int mid , int end);

/*
**	utils_1.c 				/ full
*/
void			f_exit(int i);
void			init(t_deque **a, t_deque **b, int *tmp, int len);
void			checkvaild(int *tmp, int argc, char **argv);
void			end(t_deque **a, t_deque **b);
int				fdeque_index(t_deque **a, int index);

/*
**	utils_2.c	static 1	/ full
*/
int				f_atoi(char *str);
t_deque			*fdeque_pop(t_deque **head);
int				fdeque_max(t_deque **a);
int				fdeque_min(t_deque **a);

/*
**	utils_3.c	static 2	/ full
*/
void			fdeque_free(t_deque *head);
void			fdeque_append(t_deque **head, int val);
size_t			fdeque_len(t_deque *head);

/*
**	utils_4.c	static 1	/ full
*/
void			pa(t_deque **a, t_deque **b);
void			pb(t_deque **a, t_deque **b);
int				sasb(t_deque **a, int c);
void			ss(t_deque **a, t_deque **b);

/*
**	utils_5.c				/ 4
*/
int				rarb(t_deque **a, char c);
void			rr(t_deque **a, t_deque **b);
int				rrarrb(t_deque **a, char c);
void			rrr(t_deque **a, t_deque **b);

/*
**	sort_1.c	static 1	/ full
*/
void			sort(t_deque **a, t_deque **b, int len);
void			sort_sub_2(t_deque **a);
void			sort_sub_3(t_deque **a);
void			sort_sub_4(t_deque **a, t_deque **b);

/*
**	sort_2.c
*/
void			sort_sub_5(t_deque **a, t_deque **b, int len);
void			fdeque_pivot(t_deque **a,int *pivot, int len);
void			sort_rec(t_deque **a, t_deque **b, int len);
void			sort_rec_2(t_deque **a, t_deque **b, int len);
void			sort_rec_sub(t_deque **a, t_deque **b, int len);

/*
**	sort_2.c				/2
*/


#endif