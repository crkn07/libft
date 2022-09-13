/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 08:13:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/08/29 14:17:56 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	b = 0;
	c = 0;
	while (dest[b] != '\0')
		b++;
	while (src[c] != '\0')
		s++;
	if (b >= size)
		return (size + c);
	while (((b + d) < (size - d)) && (src[d] != '\0'))
	{
		dest [b + d] = src[b];
		b++;
	}
	dest[b + d] = '\0';
	return (c + b);
}
