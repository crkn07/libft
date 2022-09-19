/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:29:03 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 17:29:31 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<string.h>
#include<stdio.h>*/

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	c;

	if (*to_find == '\0')
		return ((char *)str);
	i = 0;
	while ((*str != '\0') && (i < n))
	{
		c = 0;
		while ((*(str + c)) == (*(to_find + c)) && (i + c < n))
		{
			if (*(to_find + c + 1) == '\0')
				return ((char *)str);
			c++;
		}
		i++;
		str++;
	}
	return (0);
}
