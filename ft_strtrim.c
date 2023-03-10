/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:30:46 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:36:50 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s_trim;
	size_t		start;
	int			end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (char_is_in_set(set, s1[start]) && start < ft_strlen(s1))
		start++;
	end = ft_strlen(s1) - 1;
	while (char_is_in_set(set, s1[end]) && end >= 0)
		end--;
	if (start == ft_strlen(s1))
	{
		s_trim = ft_calloc(1, sizeof(char));
		if (!s_trim)
			return (NULL);
		return (s_trim);
	}
	s_trim = ft_substr(s1, start, (end - start + 1));
	return (s_trim);
}
