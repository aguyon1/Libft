/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:35:51 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:28:39 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;

	if (!dest && !src)
		return (NULL);
	if (src > dest)
		dest = ft_memcpy(dest, src, n);
	else
	{
		char_dest = (char *)dest;
		char_src = (char *)src;
		while (n--)
			char_dest[n] = char_src[n];
	}
	return (dest);
}
