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

#define whitespace(c) (c == 32 || (9 <= c && c <= 13))

char			*g_malloc[10];
typedef	struct	s_deque
{
	int			no;
	int			val;
	t_deque		*prev;
	t_deque		*next;
}				t_deque;


/*
**	utils_1.c
*/
void			f_exit(int i)
size_t			f_stacklen(char **str);
size_t			f_strlen(char *str);
char			*f_malloc(int size, int cnt);
void			f_cpy(char *dest, char *cpy);

/*
**	utils_2.c
*/



# endif