/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:17:29 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/13 19:17:48 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *new;
    t_list  *tmp;

    if (!lst || !f || !del)
        return (NULL);
    tmp = ft_lstnew(f(lst -> content));
    if (!tmp)
        return (NULL);
    new = tmp;
    lst = lst -> next;
    while (lst)
    {
        tmp -> next = ft_lstnew(f(lst -> content));
        if (!tmp -> next)
        {
            ft_lstclear(&new,del);
            return (NULL);
        }
        tmp = tmp -> next;
        lst = lst -> next;
    }
    tmp -> next = NULL;
    return (new);
}