/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:00:36 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 18:24:42 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	signef(char str, long *i)
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
	long	i;
	long	n;
	int		signe;

	i = 0;
	n = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_strncmp(str, "9223372036854775807", 19) > 0
		&& ft_strlen(str) > 19 && str[0] != '-')
		return (-1);
	if (ft_strncmp(str, "-9223372036854775808", 20) > 0 && ft_strlen(str) > 20)
		return (0);
	signe = signef(str[i], &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (signe * n);
}
