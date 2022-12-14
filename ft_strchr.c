/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:24:59 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:27 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
