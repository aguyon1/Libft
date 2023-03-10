/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:51:26 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:36:01 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	pos;

	pos = (int)ft_strlen(s) + 1;
	while (pos--)
	{
		if (s[pos] == (char)c)
			return ((char *)s + pos);
	}
	return (NULL);
}
