#include <stdio.h>
#include "get_next_line.h"
#include "ft_query.h"
#include "hotrace.h"

t_que *ft_mkquery(t_que *que, char *s)
{
    t_que *tmp;

    if (!que)
    {
        if (!(que = (t_que *)malloc(sizeof(t_que))))
            return (NULL);
        que->cont = ft_strdup(s);
        que->next = NULL;
    }
    else
    {
        tmp = que;
        while (tmp->next)
            tmp = tmp->next;
        if (!(tmp->next = (t_que *)malloc(sizeof(t_que))))
            return (NULL);
        tmp->next->cont = ft_strdup(s);
        tmp->next->next = NULL;
    }
    return (que);
}

char *ft_find_word(t_alp *alp, char *str)
{
    while (*str)
    {
        if (!alp->tree[*str])
            return (NULL);
        alp = alp->tree[*str];
        str++;
    }
    return (alp->cont);
}

void ft_find_words(t_alp *alp, t_que *que)
{
    char *str;

    while (que)
    {
        str = ft_find_word(alp, que->cont);
        if (!str)
        {
            ft_putstr(que->cont);
            ft_putstr(" Not found\n");
        }
        else
            ft_putendl(str);
        que = que->next;
    }
}

int ft_clean_alp(t_alp **alp)
{
    if (!alp)
        return (0);
    return (1);
}

int main()
{
    char    *strk;
    char    *strv;
    t_alp   *alp;
    t_que   *que;
    int     i;

    que = NULL;
    alp = (t_alp *)malloc(sizeof(t_alp));
    if (alp == NULL)
        return (1);
    alp->cont = NULL;
    i = 0;
    while (i < TREE_SIZE)
        alp->tree[i++] = NULL;
    while (1)
    {
        get_next_line(0, &strk);
        if (!strk[0])
            break ;
        get_next_line(0, &strv);
        if (!ft_push_word(alp, strk, strv))
            return (ft_clean_alp(&alp));
        if (!strv[0])
            break ;
    }
    while (1)
    {
        get_next_line(0, &strv);
        if (!strv[0])
            break ;
        que = ft_mkquery(que, strv);
    }
    ft_find_words(alp, que);
    ft_clean_alp(&alp);
    return (0);
}