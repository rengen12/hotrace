/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_branch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 12:58:43 by yandriie          #+#    #+#             */
/*   Updated: 2017/12/02 13:27:58 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

int		ft_new_branch(t_alp *head, int i)
{
	size_t	j;

	head->tree[i] = (t_alp *)malloc(sizeof(t_alp));
	if (head->tree[i] == NULL)
		return (0);
	head = head->tree[i];
	head->cont = NULL;
	j = 0;
	while (j < TREE_SIZE)
		head->tree[j++] = NULL;
	return (1);
}
