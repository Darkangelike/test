/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:05:55 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 18:21:19 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		{
			if (str[i] < '0' || str[i] > '9')
				return ("Is Not Numeric");
			i++;
		}
	}
	return ("Is Numeric");
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

int		main(void)
{
	char str1[] = "abcdef";
	char str2[] = "123456";
	char str3[] = "";

	ft_putstr(ft_str_is_numeric(str1));
	ft_putchar('\n');
	ft_putstr(ft_str_is_numeric(str2));
	ft_putchar('\n');
	ft_putstr(ft_str_is_numeric(str3));
	return (0);
}
