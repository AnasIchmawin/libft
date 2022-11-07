/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:14:33 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:47:56 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		d[i] = s[i + start];
		i++;
	}
	d[i] = '\0';
	return (d);
}
