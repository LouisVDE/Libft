/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:40:35 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:34 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len_str;

	str = (char *)s;
	len_str = ft_strlen(str);
	while (len_str >= 0)
	{
		if (str[len_str] == (char) c)
			return (&str[len_str]);
		len_str--;
	}
	return (0);
}
