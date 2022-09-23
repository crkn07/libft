/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:46:30 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/23 16:30:18 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	leng;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	leng = ft_strlen(start + s);
	if (leng < len)
		len = leng;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), len + 1);
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

	char *s = ft_substr("tripouille", 0, 42000);
	printf(s);
	free(s);
	return (0);
}
*/