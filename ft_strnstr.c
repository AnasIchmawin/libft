/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:58:15 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:47:21 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *tmp, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (tmp[i] == '\0')
		return ((char *)s);
	if (len == 0)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		if (s[i] == tmp[0])
		{
			while (tmp[j] != '\0' && s[i + j] == tmp[j] && i + j < len)
				j++;
			if (tmp[j] == '\0')
				return ((char *)(s + i));
		}
		i++;
	}
	return (0);
}
