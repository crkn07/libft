/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:38:03 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/16 16:08:18 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{	
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int	main(void)
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
*/