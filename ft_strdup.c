/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:59:29 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:31:37 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy_s;
	size_t	len_s;

	len_s = ft_strlen(s);
	copy_s = malloc(len_s * sizeof(char) + 1);
	if (!copy_s)
		return (NULL);
	ft_strlcpy(copy_s, s, len_s + 1);
	return (copy_s);
}
