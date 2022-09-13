/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:38:03 by crtorres          #+#    #+#             */
/*   Updated: 2022/08/29 18:46:20 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{	
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main (void)
{
	char	str1[] = "Holapepe";
	char	str2[] = "Hola";

	int ret;
	ret = ft_strncmp(str1, str2, 5);
	if(ret < 0)
	{
		printf("str1 es menor que str2");
	} else if(ret > 0) {
		printf("str2 es menor que str1");
	} else {
		printf("str1 es igual a str2");
	}
	return (0);
}
