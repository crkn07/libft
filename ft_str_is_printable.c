/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:43:06 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/13 14:44:28 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

int main()
{
	char str[] = ("aaÑa");
	printf("%d", ft_str_is_printable(str));
	return (0);
}
