/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/23 15:01:11 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char	*str, char c)
{
	size_t	countw;
	size_t	i;

	countw = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] != c && str[i] != 0)
		{
			countw++;
			while (str[i] != c && str[i] != 0)
				i++;
		}
		else if (str[i] != 0)
			i++;
	}
	return (countw);
}

static void	ft_strcpy(char *dst, const char *src, int start, int last)
{
	int	i;

	i = 0;
	while (start < last)
	{
		dst[i] = src[start];
		i++;
		start++;
	}
	dst[i] = 0;
}

static void	*freemmory(char **memry, size_t aux)
{
	size_t	i;

	i = 0;
	while (i < aux)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}

static void	save_words(const char *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i] != 0)
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			str[j] = (char *)malloc(sizeof(char) * (i - start +1));
			if (str[j] == 0)
			{
				freemmory(str, j);
				return ;
			}
			ft_strcpy(str[j], s, start, i);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	n;

	if (s == 0)
		return (0);
	n = count_words(s, c);
	str = ((char **)malloc(sizeof(char *) * (n + 1)));
	if (str == 0)
		return (0);
	str[n] = 0;
	if (n == 0)
		return (str);
	save_words(s, c, str);
	return (str);
}
