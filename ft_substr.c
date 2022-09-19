/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:46:30 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 12:05:56 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	b;
	char	*str;

	i = 0;
	b = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && b < len)
		{
			str[b] = s[i];
			b++;
		}
		i++;
	}
	str[b] = 0;
	return (str);
}
/*
int	main(void)
{
	char	*var = "abcdef";
	char	buffer[6] = "";

	printf("%s\n", strncpy(buffer, &var[2], 3));
	printf("%s\n", strcpy(buffer, &var[2]));
	var = ft_substr("abcdef", 2, 3);
	printf("%s\n", var);
	free(var);
	var = ft_substr("abcdef", 1, 2);
	printf("%s\n", var);
	free(var);
	return (0);
}
*/