/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-13 14:06:38 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-13 14:06:38 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*ns;

	ns = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!ns)
		return (0);
	if (!s1)
		return (0);
	ns = ft_memcpy(ns, s1, ft_strlen(s1));
	return (ns);
}
