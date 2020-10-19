/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:27:55 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 18:18:13 by itieu            ###   ########lyon.fr   */
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
        {
            return ("Is Not Alpha");
        }
		i++;
	}
	return ("Is Alpha");
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
    char str1[] = "AAA";
    char str2[] = "123456";
    char str3[] = "";
    
    ft_putstr(ft_str_is_alpha(str1));
    ft_putchar('\n');
    ft_putstr(ft_str_is_alpha(str2));
    ft_putchar('\n');
    ft_putstr(ft_str_is_alpha(str3));
            
    return (0);
}
