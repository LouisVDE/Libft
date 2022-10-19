/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:04:50 by lovanden          #+#    #+#             */
/*   Updated: 2022/10/19 10:14:40 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sublen(int k, int start, int len, const char *s)
{
	while (s[k + start])
		k++;
	if (len > k)
		len = k;
	return (len);
}

static int	casestart(char **substr)
{
	*substr = (char *)malloc(sizeof(char) * 1);
	if (!*substr)
		return (0);
	*substr[0] = '\0';
	return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start)
	{
		if (!casestart(&substr))
			return (NULL);
		return (substr);
	}
	len = sublen(k, start, len, s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}

/*#include <stdio.h>

int main(void)
{
	char *s;

	s = "0123456789";
	printf("%s", ft_substr(s, 2, 5));
}*/