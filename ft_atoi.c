/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:00:36 by aichmawi          #+#    #+#             */
/*   Updated: 2022/10/09 17:31:16 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	n;
	int	signe;

	i = 0;
	n = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (ft_strncmp(str,"9223372036854775807",19) > 0 && ft_strlen(str) > 19 && str[0] != '-')
		return (-1);
	if (ft_strncmp(str,"-9223372036854775808",20) > 0 && ft_strlen(str) > 20)
		return (0);	
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = - signe;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (signe * n);
}
