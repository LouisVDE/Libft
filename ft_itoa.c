/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:52:42 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:08 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_str(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	tmp;
	char			*str;

	len = size_str(n);
	tmp = n;
	if (n < 0)
	{
		len++;
		tmp = -tmp;
	}
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
	str[len - 1] = tmp % 10 + '0';
	tmp = tmp / 10;
	len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
