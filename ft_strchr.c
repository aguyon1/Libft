/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:29 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:30:22 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	size_s;
	int	i;

	size_s = ft_strlen(s) + 1;
	i = 0;
	while (size_s > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
		size_s--;
	}
	return (NULL);
}
