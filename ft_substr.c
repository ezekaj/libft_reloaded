/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-13 14:34:20 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-13 14:34:20 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	if (slen >= start)
	{
		ss = ft_calloc(len + 1, sizeof(char));
		if (!ss)
			return (NULL);
		ss = ft_memcpy(ss, (s + start), len);
		ss[len] = 0;
		return (ss);
	}
	return (NULL);
}
