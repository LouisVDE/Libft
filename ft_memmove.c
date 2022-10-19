/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:36:12 by lovanden          #+#    #+#             */
/*   Updated: 2022/10/19 20:54:33 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst_temp;
	const unsigned char	*src_temp;

	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	i = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src_temp < dst_temp)
		while (len--)
			dst_temp[len] = src_temp[len];
	else if (dst_temp < src_temp)
		while (++i < len)
			dst_temp[i] = src_temp[i];
	return (dst);
}
