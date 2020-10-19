/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:52:59 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 18:21:45 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return ("Is not lowercase");
		}
		i++;
	}
	return ("Is lowercase");
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int index;
    
    index = 0;
    while (str[index] != '\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

int        main (void)
{
    char str1[] = "abcdef";
    char str2[] = "ABCDEF";
    char str3[] = "123456";
    char str4[] = "";
    
    ft_putstr(ft_str_is_lowercase(str1));
    ft_putchar('\n');
    ft_putstr(ft_str_is_lowercase(str2));
    ft_putchar('\n');
    ft_putstr(ft_str_is_lowercase(str3));
    ft_putchar('\n');
    ft_putstr(ft_str_is_lowercase(str4));
    
    return (0);
}
