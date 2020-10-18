/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 21:29:24 by itieu             #+#    #+#             */
/*   Updated: 2020/10/18 16:14:26 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int tonine[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index;

	index = 0;
	while (index < 9)
	{
		ft_putchar(tonine[index] + 48);
		index++;
	}
	index = 0;
	ft_putchar('\n');
	ft_rev_int_tab(tonine, 9);
	while (index < 9)
	{
		ft_putchar(tonine[index] + 48);
		index++;
	}
	return (0);
}
