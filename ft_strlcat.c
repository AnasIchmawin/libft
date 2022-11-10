/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:19:22 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/09 10:48:00 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_d;
	size_t	size_s;

	size_s = ft_strlen(src);
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (dstsize + size_s);
	size_d = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && size_d + i < dstsize - 1)
	{
		dst[size_d + i] = src [i];
		i++;
	}
	dst[size_d + i] = '\0';
	return (size_d + size_s);
}
