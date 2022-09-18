/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:29:03 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/18 16:18:50 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	c;
	size_t	d;

	i = 0;
	c = 0;
	d = i;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[d] == to_find[c] && to_find[c] && str[d] && d < n)
		{
			d++;
			c++;
		}
		if (to_find[c] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*searchingfor = "la";
	char	*in = "la da\ndoo a da\nnow here comes the stack\nok there was.\n";

	printf("found: %s\n", strnstr(in, searchingfor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingfor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingfor, 5) ? "yes" : "no");
	return (0);
}
*/