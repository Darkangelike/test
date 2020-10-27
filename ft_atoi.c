/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:52:27 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 16:18:52 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int        ft_atoi(char *str)
{
    int base;
    int sign;
    int i;
    
    i = 0;
    base = 0;
    sign = 1;
   // while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	while (str[i] <= 32)
    {
        i++;
    }
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = (sign *(-1));
        }
		i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        base = base * 10  + (str[i] - '0');
        i++;
    }
    return (base * sign);
}

#include <stdio.h>

int		main (void)
{
	printf("%d", ft_atoi("	 	 	 -----12345a"));
	return (0);
}
