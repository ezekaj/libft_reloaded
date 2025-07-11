/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-10 11:06:10 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-10 11:06:10 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ss1;
	char	*ss2;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i])
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((int)(unsigned char)ss1[i] - (unsigned char)ss2[i]);
}
