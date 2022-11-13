/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:49:35 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/08 09:06:05 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc(size_t count)
{
	char	**s;

	s = (char **)ft_calloc(sizeof(char *), (count + 1));
	if (s == NULL)
		return (NULL);
	return (s);
}

static size_t	count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
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

static char	**free_s(char **p)
{
	int	i;

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
	int		i;
	int		j;

	i = 0;
	p = alloc(count(s, c));
	if (!p)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s && *s == c)
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
