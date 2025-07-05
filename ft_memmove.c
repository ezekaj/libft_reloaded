/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-05 12:00:04 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-05 12:00:04 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			(*(unsigned char *)(dst + i)) = (*(unsigned char *)(src + i));
		}
	}
	else
	{
		while (i < len)
		{
			(*(unsigned char *)(dst + i)) = (*(unsigned char *)(src + i));
			i++;
		}
	}
	return ((void *)dst);
}
