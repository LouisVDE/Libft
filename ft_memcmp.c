/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:06:21 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:17 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1_temp;
	unsigned char	*str2_temp;

	i = 0;
	str1_temp = (unsigned char *)s1;
	str2_temp = (unsigned char *)s2;
	while (i < n)
	{
		if (str1_temp[i] != str2_temp[i])
			return (str1_temp[i] - str2_temp[i]);
		i++;
	}
	return (0);
}
