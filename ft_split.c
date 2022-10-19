/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:49:35 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/13 18:06:39 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    alloc(char **s, size_t count)
{
    s = (char **)malloc(sizeof(char *) * (count + 2));
    if (*s == NULL)
        return (NULL);
}

size_t count(char const *s,char c)
{
    size_t  count;

    count = 0;
    if (s == NULL)
        return (0);
    while (s[i])
    {
        if(s[i] == c)
            count++;
    }
    return (count);
}

char *changec(char const *p, char c)
{
    int i;
    i = 0;
    if(p == NULL)
        return (NULL);
    while(p[i])
    {
        if(p[i] == c)
            p[i] = '\0';
        i++;
    }
    return (p);
}

char **ft_split(char const *s, char c)
{
    char    **p;
    char    *tmp;
    size_t     i;
    size_t     len;

    i = 0;
    len = 0;
    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    alloc(p, count(s, c));
    tmp = changec(s, c);
    while (tmp[i])
    {
        
        if(tmp[i] == '\0' && tmp[i + 1] != '\0')
            i++;
        i++;
    }
    
}
