/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-11 12:30:15 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-11 12:30:15 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ss[i] == (char)c)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}
