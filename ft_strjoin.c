/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:30:20 by crtorres          #+#    #+#             */
/*   Updated: 2022/09/20 15:48:44 by crtorres         ###   ########.fr       */
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
	new_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (new_string == NULL)
		return (NULL);
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_string[i + j] = s2[j];
		j++;
	}
	new_string[i + j] = '\0';
	return (new_string);
}
