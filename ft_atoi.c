/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:40:41 by lovanden          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/10/10 13:30:21 by lovanden         ###   ########.fr       */
=======
/*   Updated: 2022/10/10 15:09:39 by lovanden         ###   ########.fr       */
>>>>>>> 196390665d2bd18ba471483bc944ba2f07743309
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int ft_verifification(char c)
=======
static int	ft_verif(char c)
>>>>>>> 196390665d2bd18ba471483bc944ba2f07743309
{
	if (c && (c == '\f' || c == '\t' || c == ' ')
		|| (c == '\n' || c == '\r' || c == '\v'))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	result;
	int				sign;
	int				i;

<<<<<<< HEAD
    i = 0;
    while(ft_verifification(str[i]) == 1)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sign = -1;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i++] - '0';
        if (result > LONG_MAX && sign == 1)
            return (-1);
        if (result > LONG_MAX && sign == -1)
        return (0);
    }
    result *= sign;
    return ((int)(result));
}
=======
	i = 0;
	while (ft_verif(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
		if (result > LONG_MAX && sign == 1)
			return (-1);
		if (result > LONG_MAX && sign == -1)
			return (0);
	}
	result *= sign;
	return ((int)(result));
}
>>>>>>> 196390665d2bd18ba471483bc944ba2f07743309
