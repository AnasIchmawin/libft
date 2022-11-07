/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:12:12 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:40:52 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!*lst)
		*lst = new;
	else
	{
		l = ft_lstlast(*lst);
		l -> next = new;
	}
}
