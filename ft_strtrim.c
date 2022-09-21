/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:53:30 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/20 16:48:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (len > start && ft_char_in_set(s1[len -1], set))
		len--;
	str = (char *)malloc(sizeof(*s1) * (len - start +1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < len)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
