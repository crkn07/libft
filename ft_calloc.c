/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:30:27 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/22 12:24:23 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count >= SIZE_MAX)
		return (NULL);
	ptr = malloc (size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
// void	*ft_calloc(size_t count, size_t size){ return(calloc(count, size));}
/*
int main(void)
{
	printf("%p\n", SIZE_MAX);
	return(0);
}*/