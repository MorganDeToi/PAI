/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauvy <mcauvy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:47:26 by mcauvy            #+#    #+#             */
/*   Updated: 2014/11/13 12:47:56 by mcauvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int   pos_i;
	int   num;
	int	  sign;

	pos_i = 0;
	num = 0;
	sign = 0;
	while (str[pos_i] == ' ' || (str[pos_i] >= 8 && str[pos_i] <= 14))
		pos_i++;
	if (str[pos_i] == '-')
	{
		pos_i++;
		sign = 1;
	}
	else if (str[pos_i] == '+')
		pos_i++;
	while (ft_isdigit(str[pos_i]))
	{
		num *= 10;
		num += str[pos_i] - '0';
		pos_i++;
	}
	return ((sign == 1) ? -num : num);
}
