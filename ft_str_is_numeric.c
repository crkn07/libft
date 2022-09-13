/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:13:45 by crtorres          #+#    #+#             */
/*   Updated: 2022/08/24 10:31:46 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<unistd.h>*/
/*#include<stdio.h>*/
/*#include<string.h>*/

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str [b] != '\0')
	{
		if ((str[b] >= 48 && str[b] <= 57))
		{
			a++;
		}
		b++;
	}	
	if (b == a || str[0] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char str[] = ("15134");
	printf("%d", ft_str_is_numeric(str));
}
*/
