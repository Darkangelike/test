/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:27:39 by itieu             #+#    #+#             */
/*   Updated: 2020/10/25 16:59:32 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] = str[i - 1] - 32;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
			(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
			(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
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
    char str1[] = "hello i am new here AA";
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



