/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:05:01 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/16 11:17:55 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[b] != '\0' && b < (size -1))
		{
			dst[b] = src[b];
			b++;
		}
		dst[b] = '\0';
	}
	return (a);
}
/*
int	main(void)
{
	char	dest[] = "vhvv";
	char	src[] = "12 dsa e";
	size_t	n;

	n = 4;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
*/