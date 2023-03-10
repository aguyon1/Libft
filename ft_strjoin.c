/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:06:39 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:32:29 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_join;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s_join = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (!s_join)
		return (NULL);
	ft_strlcpy(s_join, s1, len_s1 + 1);
	ft_strlcpy(s_join + len_s1, s2, len_s2 + 1);
	return (s_join);
}
