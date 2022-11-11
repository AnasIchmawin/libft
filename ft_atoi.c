/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:00:36 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/11 10:12:24 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	signef(char str, int *i)
{
	int	signe;

	signe = 1;
	if (str == '-' || str == '+')
	{
		if (str == '-')
			signe = -signe;
		(*i)++;
	}
	return (signe);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		signe;

	i = 0;
	n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	signe = signef(str[i], &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (signe * n);
}
