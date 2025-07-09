/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-09 08:39:57 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-09 08:39:57 by elzekaj          ###   ########elzekaj@  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == (unsigned char)c)
		return (&s[i]);
	i--;
	while (i >= 0 && s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("teste", 1125));
// 	printf("%s\n", strrchr("teste", 1125));
// }
