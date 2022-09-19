/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c 		                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:43:06 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/13 17:19:39 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include<string.h>
#include<unistd.h>
#include<stdio.h>*/

int	ft_isprint(int a)
{
	if ((a < 32 || a > 126))
	{
		return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	a = "aaÑa";

	printf("%d", ft_isprint(a));
	return (0);
}
*/