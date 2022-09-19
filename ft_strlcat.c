/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:13:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 18:19:46 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<unistd.h>*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	c;
	size_t	d;

	len = ft_strlen(src);
	c = 0;
	while (dst[c] && c < size)
		c++;
	d = 0;
	while (src[c] && c + d + 1 < size)
		dst[c + d] = src[d];
		d++;
	if (d != 0)
		dst[c + d] = '\0';
	return (len + c);
}
