/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:30:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/19 15:03:33 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_string;

	i = 0;
	j = 0;
	new_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_string == NULL)
		return (NULL);
	while (s1[i])
	{
		new_string[j++] = s1[i++];
	}
	while (s2[i])
	{
		new_string[j++] = s2[i++];
	}
	new_string[j] = '\0';
	return (new_string);
}
