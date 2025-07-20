/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elzekaj <elzekaj@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-20 12:58:17 by elzekaj           #+#    #+#             */
/*   Updated: 2025-07-20 12:58:17 by elzekaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **wordv)
{
	int	i;

	i = 0;
	while (wordv[i])
	{
		free(wordv[i]);
		i++;
	}
	free(wordv);
}

static char	*fill(const char *s, char c, int *start)
{
	char	*word;
	int		end;

	end = *start;
	while (s[end] != c && s[end])
		end++;
	word = malloc(end - *start + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s + *start, end - *start);
	word[end - *start] = 0;
	*start = end;
	return (word);
}

static size_t	count_words(const char *s, char c)
{
	size_t	words;
	bool	isword;

	words = 0;
	if (!s)
		return (words);
	while (*s)
	{
		isword = false;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			if (!isword)
			{
				++words;
				isword = true;
			}
			++s;
		}
		isword = false;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**wordv;
	size_t	words;
	size_t	i;
	int		start;

	words = 0;
	start = 0;
	i = 0;
	words = count_words(s, c);
	wordv = ft_calloc((words + 1), sizeof(char *));
	if (!wordv)
		return (NULL);
	while (s[start])
	{
		while (s[start] == c && s[start])
			start++;
		if (!s[start])
			break ;
		wordv[i] = fill(s, c, &start);
		if (wordv[i] == NULL)
			return (ft_free(wordv), NULL);
		i++;
	}
	return (wordv);
}
