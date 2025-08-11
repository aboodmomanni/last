/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <aalmoman@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:49:01 by aalmoman          #+#    #+#             */
/*   Updated: 2025/08/11 16:52:16 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(char **arr, size_t count)
{
	while (count > 0)
	{
		free(arr[count - 1]);
		count--;
	}
	free(arr);
}

char	*worddup(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (end - start + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*words(const char *s, size_t *p, char c)
{
	char	*w;
	size_t	start;
	size_t	end;

	if (!s || !p)
		return (NULL);
	while (s[*p] == c)
		(*p)++;
	if (!s[*p])
		return (NULL);
	start = *p;
	while (s[*p] && s[*p] != c)
		(*p)++;
	end = *p;
	w = worddup(s, start, end);
	return (w);
}

size_t	word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	pos;
	char	**sol;
	size_t	wordi;
	size_t	temp;

	pos = 0;
	wordi = 0;
	sol = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!sol)
		return (NULL);
	temp = word_count(s, c);
	while (wordi < temp)
	{
		sol[wordi] = words(s, &pos, c);
		if (sol[wordi] == NULL)
		{
			free_words(sol, wordi);
			break ;
		}
		wordi++;
	}
	sol[wordi] = NULL;
	return (sol);
}
