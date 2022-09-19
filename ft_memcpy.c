/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:44:38 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 15:39:45 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<string.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (src == dst)
		return (dst);
	while (a < n)
	{	
		(((unsigned char *)dst)[a]) = (((unsigned char *)src)[a]);
		a++;
	}
	return (dst);
}
