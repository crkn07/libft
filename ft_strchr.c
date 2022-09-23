/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:32:08 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/22 18:19:36 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (const char)c)
			return ((char *) str);
			str++;
	}	
	if (*str == (const char)c)
	{
		return ((char *) str);
	}
	return (0);
}
