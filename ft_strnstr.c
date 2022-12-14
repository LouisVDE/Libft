/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:30:14 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:34 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = -1;
	ret = (char *) haystack;
	if (ft_strlen(needle) == 0)
		return (ret);
	if (len == 0)
		return (0);
	while (haystack[++i])
	{
		j = -1;
		while (needle[++j])
		{
			if (haystack[i + j] == needle[j] && i + j < len)
			{
				if (j == ft_strlen(needle) - 1)
					return (&ret[i]);
			}
			else
				break ;
		}
	}
	return (0);
}
