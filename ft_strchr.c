/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:24:59 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/14 19:21:33 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)s;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&ret[i]);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&ret[i]);
	return (0);
}
