/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:48:20 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 19:20:56 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_double(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		if (str[i] != str[j])
			j++;
		if (str[i] == str[j])
			return (0);
		i++;
	}
	return (1);
}


int		ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) == 0)
		return (0);
	if (ft_check_double(base) == 0)
		return (0);
	while (base[i])
	{
		if (base[i] != '-' || base[i] != '+')
			i++;
		if (!(base[i] < 32 || base[i] > 126))
			i++;
		else
			return (0);
	}
	return (1);
}
	
void	ft_putnbr_base(int nbr, char *base)
{
	int base_length;
	int i;

	i = 0;
	base_length = ft_strlen(base);
	if (nbr == 0)
		ft_putchar('0');
	if (ft_check_base(base) == 0)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_length)
	{
		ft_putchar(nbr % base_length);
		ft_putchar(nbr / base_length);
	}
	if (nbr < base_length)
	{
		ft_putchar(nbr + base_length + 48);
	}
	i++;
}

int main (void)
{
	char str1[] = "01";

	ft_putnbr_base(10, str1);
	return (0);
}

