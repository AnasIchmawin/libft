/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:12:05 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:41:55 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*b;

	i = 0;
	if (n == 0)
		return (NULL);
	b = (const char *)s;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	if (b[i] == (unsigned char)c)
		return ((void *)s + i);
	return (NULL);
}
