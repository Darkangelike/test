/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:27:55 by itieu             #+#    #+#             */
/*   Updated: 2020/10/18 19:25:26 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int index;
	
	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] < 'a' || str[index] > 'z' || str[index] < 'A' || str[index] > 'Z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main (void)
{
	char str1[] = "abcdef";
	char str2[] = "123456";
	
	ft_putchar(ft_str_is_alpha(str1));
	ft_putchar(ft_str_is_alpha(str2));
	return (0);
}
