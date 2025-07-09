/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-09 09:30:14 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-09 09:30:14 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && --n && s1[i] == s2[i])
		i++;
	return ((int)(unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", strncmp("ac", "ac", 3));
// 	printf("%d\n", ft_strncmp("ac", "ac", 3));
// }
