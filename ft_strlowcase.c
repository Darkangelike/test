/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 19:07:24 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 19:13:23 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'A') || (str[index] <= 'Z'))
			str[index] += 32;
		index++;
	}
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
    char str1[] = "abcdefz";
    char str2[] = "ABCDEF";
    char str3[] = "123456";
    char str4[] = "";
    
    ft_putstr(ft_strlowcase(str1));
    ft_putchar('\n');
    ft_putstr(ft_strlowcase(str2));
    ft_putchar('\n');
    ft_putstr(ft_strlowcase(str3));
    ft_putchar('\n');
    ft_putstr(ft_strlowcase(str4));
    
    return (0);
}

