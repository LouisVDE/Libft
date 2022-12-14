/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:05:29 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:23 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	*ft_free_all_tab(char **strs, int i)
{
	while (--i >= 0)
		free(strs[i]);
	free(strs);
	return (NULL);
}

static char	*ft_extract_word(const char *s, char c)
{
	char		*word;
	const char	*save;
	size_t		i;

	save = s;
	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	word = ft_substr(save, 0, i);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**save;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char const *) * (ft_count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	save = strs;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (!*s)
			break ;
		*strs = ft_extract_word(s, c);
		if (!*strs)
			return (ft_free_all_tab(save, (strs - save) + 1));
		strs++;
		while (*s && (*s != c))
			s++;
	}
	*strs = NULL;
	return (save);
}
