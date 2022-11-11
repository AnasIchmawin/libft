/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:18:07 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:38:57 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*test(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static int	size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;
	int		si;

	if (n == 0 || n == -2147483648)
		return (test(n));
	si = size(n);
	p = (char *)ft_calloc(sizeof(char), (si + 1));
	if (p == NULL)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	i = si - 1;
	while (n > 0)
	{
		p[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (p);
}
