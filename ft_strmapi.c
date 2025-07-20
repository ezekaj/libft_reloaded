/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-20 14:25:29 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-20 14:25:29 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		sl;
	char		*ns;

	i = 0;
	sl = ft_strlen(s);
	ns = ft_calloc(sl + 1, sizeof(char));
	if (!ns)
		return (0);
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	return (ns);
}
