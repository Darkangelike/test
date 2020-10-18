/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:45:22 by itieu             #+#    #+#             */
/*   Updated: 2020/10/18 16:20:00 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int index;
	int index2;

	index = 0;
	index2 = 1;
	while (index < size)
	{
		while (index2 < size)
		{
			if (tab[index] > tab[index2])
			{
				tmp = tab[index2];
				tab[index2] = tab[index];
				tab[index] = tmp;
			}
			index2++;
		}
		index++;
		index2 = index + 1;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int tonine[] = {4, 1, 5, 6, 8, 9, 3, 7};
	int index3;
	
	ft_sort_int_tab(tonine, 8);
	index3 = 0;
	while (index3 <= 8)
	{
		ft_putchar(tonine[index3] + 48);
		index3++;
	}
}
