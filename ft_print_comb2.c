/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 12:03:18 by itieu             #+#    #+#             */
/*   Updated: 2020/10/12 17:34:15 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_comb2(void)
{
	int a = 0;
	int b;

	while(a <= 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_putchar('0' + a/10);
			ft_putchar('0' + a%10);
			ft_putchar(' ');
			ft_putchar('0' + b/10);
			ft_putchar('0' + b%10);
			
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}

}

int main()
{
	ft_print_comb2();
	return (0);
}

