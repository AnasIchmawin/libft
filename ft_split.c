/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:49:35 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 17:46:42 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**alloc(char **s, size_t count)
{
	s = (char **)ft_calloc(sizeof(char *), (count + 1));
	if (s == NULL)
		return (NULL);
	return (s);
}

size_t	count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			if (i == 0 || s[i - 1] == c)
				count++;
			i++;
		}
	}
	return (count);
}

char	**free_s(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	p = NULL;
	p = alloc(p, count(s, c));
	if (!p)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (s[j] != '\0' && s[j] != c)
			j++;
		if (j != 0)
		{
			p[i] = ft_substr(s, 0, j);
			if (p[i] == NULL)
				return (free_s(p));
			i++;
		}
		s = s + j;
	}
	return (p);
}
