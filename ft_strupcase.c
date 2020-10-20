/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:52:37 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 19:06:22 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a') && (str[index] <= 'z'))
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
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
    char str1[] = " abcdefz457";
    char str2[] = "ABCDEF=/*+";
    char str3[] = "12345(%*6";
    char str4[] = "";
    char str5[3] = {23, 11, 22};
    
    write(1, "str1 = ", 7);
    ft_putstr(str1);
    ft_putchar('\n');
    write(1, "str2 = ", 7);
    ft_putstr(str2);
    ft_putchar('\n');
    write(1, "str3 = ", 7);
    ft_putstr(str3);
    ft_putchar('\n');
    write(1, "str4 = ", 7);
    ft_putstr(str4);
    ft_putchar('\n');
    write(1, "str5 = ", 7);
    ft_putstr(str5);
    ft_putchar('\n');
    ft_putstr(ft_strupcase(str1));
    ft_putchar('\n');
    ft_putstr(ft_strupcase(str2));
    ft_putchar('\n');
    ft_putstr(ft_strupcase(str3));
    ft_putchar('\n');
    ft_putstr(ft_strupcase(str4));
    ft_putchar('\n');
    ft_putstr(ft_strupcase(str5));
    
    return (0);
}
