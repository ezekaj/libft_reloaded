/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-15 11:10:48 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-15 11:10:48 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	nl;
	char	*ns;

	i = 0;
	nl = 0;
	if (!s1 && !set)
		return ((char *)s1);
	if (s1[0] == '\0')
		return (ft_calloc(1, sizeof(char)));
	if (set[0] == '\0')
		return (ft_strdup((char *)s1));
	l = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;
	while (l > i && ft_strchr((char *)set, s1[l]))
		l--;
	nl = l - i + 1;
	ns = ft_calloc(nl + 1, sizeof(char));
	if (!ns)
		return (NULL);
	ft_memcpy(ns, s1 + i, nl);
	return (ns);
}
