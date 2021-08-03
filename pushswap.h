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
void			ft_putstr(char *str);
size_t			f_stacklen(char **str);
size_t			f_strlen(char *str);
char			*f_malloc(int size, int cnt);

/*
**	utils_2.c
*/

# endif