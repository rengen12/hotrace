/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yandriie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:43:55 by yandriie          #+#    #+#             */
/*   Updated: 2017/12/02 13:24:58 by yandriie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void		ft_strcpy(const char *src, char *dst)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int				ft_push_word(t_alp *head, const char *key, const char *val)
{
	size_t	i;
	size_t	v_len;

	if (!head || !key || !val)
		return (0);
	i = 0;
	while (key[i])
	{
		if (head->tree[(int)key[i]] == NULL)
			if (!ft_new_branch(head, key[i]))
				return (0);
		head = head->tree[(int)key[i]];
		i++;
	}
	v_len = ft_strlen(val);
	head->cont = (char *)malloc(sizeof(char) * (v_len + 1));
	if (!head->cont)
		return (0);
	ft_strcpy(val, head->cont);
	return (1);
}
