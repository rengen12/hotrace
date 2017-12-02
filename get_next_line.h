/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:10:41 by amichak           #+#    #+#             */
/*   Updated: 2017/11/20 22:18:12 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFF_SIZE 4

typedef struct	s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}				t_list;

int		get_next_line(const int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_strdel(char **as);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_lstadd(t_list **alst, t_list *new);
char	*ft_strdup(const char *s);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);

#endif
