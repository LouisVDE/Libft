/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:30:14 by lovanden          #+#    #+#             */
/*   Updated: 2022/10/17 11:43:47 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1_less;

	s1_less = (char *)s1;
	i = 0;
	if (!*s2)
		return (s1_less);
	while (s1_less[i] && i < len)
	{
		j = 0;
		while (s1_less[i + j] == s2[j] && i + j < len)
		{
			if (!s2[j])
				return (s1_less + i);
			j++;
		}
		if (!s2[j])
			return (s1_less + i);
		i++;
	}
	return (NULL);
}
