/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:13:51 by itieu             #+#    #+#             */
/*   Updated: 2020/10/22 16:27:42 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
		if (str[i] >= '0' && str[i] <= '9')
			while ((str[i] >= '0' && str[i] <= '9') ||
					(str[i] >= 'a' && str[i] <= 'z'))
			{
				i++;
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
					i++;
				}
			}
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
            i++;
            while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32;
                i++;
            }
        }
        i++;
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
    char str1[] = "hello i am new here";
    char str2[] = "ABCDEF=/*+ ho ho ho";
    char str3[] = "12345hohoho";
    char str4[] = "iAi ii^ii 7Au 7aY";
  //  char str5[3] = {23, 11, 22};
    
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
 //   write(1, "str5 = ", 7);
 //   ft_putstr(str5);
    ft_putchar('\n');
    ft_putstr(ft_strcapitalize(str1));
    ft_putchar('\n');
    ft_putstr(ft_strcapitalize(str2));
    ft_putchar('\n');
    ft_putstr(ft_strcapitalize(str3));
    ft_putchar('\n');
    ft_putstr(ft_strcapitalize(str4));
   // ft_putchar('\n');
   // ft_putstr(ft_strcapitalize(str5));
    
    return (0);
}

