/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:04:24 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 15:41:22 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include<stdio.h>*/

int	ft_strlen(const char *str)
{
	unsigned long int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
int	main(void)
{
	char	str[] = "42 Madrid";

	unsigned long int	count;

	count = ft_strlen(str);
	printf("%lu\n", count);
}
*/