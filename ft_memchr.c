/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:43:12 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:26:34 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;
	size_t			i;

	char_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
			return (char_s + i);
		i++;
	}
	return (NULL);
}
