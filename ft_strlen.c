/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 19:16:18 by itieu             #+#    #+#             */
/*   Updated: 2020/10/17 17:00:56 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{	
	char str[] = "Hello";

	ft_putchar(ft_strlen(str) + 48);
	return (0);
}
