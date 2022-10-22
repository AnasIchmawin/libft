/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:58:15 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/17 16:58:19 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (NULL);
	while ((i < len - 1 && haystack[i]) || i == 0)
	{
			if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
