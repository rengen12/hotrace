/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:27:14 by yandriie          #+#    #+#             */
/*   Updated: 2017/12/02 13:26:09 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef TREE_SIZE
#  define TREE_SIZE 128
# endif

typedef struct	s_alp
{
	char			*cont;
	struct s_alp	*tree[TREE_SIZE];
}				t_alp;

int		ft_new_branch(t_alp *head, int i);
int		ft_push_word(t_alp *head, const char *key, const char *val);

#endif
