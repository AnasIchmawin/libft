/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:46:51 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/09 18:45:42 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = 0;
	a = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			a = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		a = (char *)(s + i);
	return (a);
}
