/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-15 12:04:31 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-15 12:04:31 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ns;
	int		i;
	int		len;

	i = 0;
	len = ft_intlen(n);
	ns = ft_calloc((len + 1), sizeof(char));
	if (!ns)
		return (NULL);
	i = len - 1;
	if (n < 0)
	{
		if (n <= -2147483648)
			return (free(ns), ft_strdup("-2147483648"));
		n = n * -1;
		ns[0] = '-';
	}
	while (n > 9)
	{
		ns[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	ns[i] = n + '0';
	return (ns);
}
