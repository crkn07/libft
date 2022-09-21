/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:16:15 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/20 10:13:55 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>*/

int	ft_atoi(const char *str)
{
	int				a;
	unsigned int	b;
	int				sign;

	a = 0;
	b = 0;
	sign = 0;
	while (str[a] == '\t' || str[a] == '\r' || str[a] == ' ' || str[a] == '\n' \
			|| str[a] == '\f' || str [a] == '\v')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a++] == '-')
			sign ++;
	}
	while (str[a] >= '0' && str[a] <= '9')
		b = (b * 10) + (str[a++] - '0');
	if (b > 2147483647 && !sign)
		return (-1);
	else if (b > 2147483648 && sign)
		return (0);
	else if (sign)
		return ((int)b * -1);
	return ((int) b);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("    +++21is--+-ab567"));
}
*/