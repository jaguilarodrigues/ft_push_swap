/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:15:25 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/03/28 20:50:54 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

static int	ft_isaccept(int c)
{
	return ((c >= 8 && c <= 13) || c == ' ') ? 1 : 0;
}

int				ft_isdigit(int c)
{
	return (!(c >= '0' && c <= '9')) ? 0 : 1;
}

long int			ft_atoi(const char *str)
{
	int sinal;
	long int num;

	sinal = 1;
	num = 0;
	while (ft_isaccept(*str))
		str++;
	if (*str == '-')
	{
		sinal = sinal * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sinal);
}
