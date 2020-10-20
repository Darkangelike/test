/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:27:55 by itieu             #+#    #+#             */
/*   Updated: 2020/10/20 12:46:14 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return ("0");
		i++;
	}
	return ("1");
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
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
    char str1[] = "AAA";
    char str2[] = "123456";
    char str3[] = "";
    
    write(1, "str1 = ", 7);
    ft_putstr(str1);
    ft_putchar('\n');
    write(1, "str2 = ", 7);
    ft_putstr(str2);
    ft_putchar('\n');
    write(1, "str3 = ", 7s);
    ft_putstr(str3);
    ft_putchar('\n');
    ft_putstr(ft_str_is_alpha(str1));
    ft_putchar('\n');
    ft_putstr(ft_str_is_alpha(str2));
    ft_putchar('\n');
    ft_putstr(ft_str_is_alpha(str3));
    
    return (0);
}
