/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:35:34 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/13 11:24:07 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_int(long int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int			len;
	int			neg;
	long int	long_n;
	char		*res;

	long_n = (long int) n;
	neg = 0;
	len = len_of_int(long_n);
	res = malloc((len * sizeof(char) + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (long_n < 0)
	{
		res[0] = '-';
		long_n *= -1;
		neg = 1;
	}
	while (len > neg)
	{
		res[len - 1] = long_n % 10 + '0';
		long_n /= 10;
		len--;
	}
	return (res);
}
