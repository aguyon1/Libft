/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:41:03 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/15 18:05:26 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_char_array(char const *s, char c)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			len++;
		i++;
	}
	return (len);
}

static int	ft_len_substr(const char *str, char c, int pos)
{
	int	len;

	len = 0;
	while (str[pos] && str[pos] != c)
	{
		len++;
		pos++;
	}
	return (len);
}

static void	ft_free_strs(char **strs, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(strs[i]);
		i++;
	}
}

static int	split_aux(char **strs, const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (j < len_of_char_array(str, c))
		{	
			strs[j] = malloc((ft_len_substr(str, c, i) + 1) * sizeof(char));
			if (!strs[j])
			{
				ft_free_strs(strs, j);
				return (0);
			}
			ft_strlcpy(strs[j], str + i, ft_len_substr(str, c, i) + 1);
			i += ft_len_substr(str, c, i);
			j++;
		}
	}
	strs[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		len_strs;

	if (!s)
		return (NULL);
	len_strs = len_of_char_array(s, c);
	strs = malloc((len_strs + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (split_aux(strs, s, c) == 0)
		return (NULL);
	return (strs);
}
