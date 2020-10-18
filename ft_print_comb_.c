/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:21:06 by itieu             #+#    #+#             */
/*   Updated: 2020/10/11 21:35:15 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	char v;

	a = '0';
	b = '1';
	c = '2';
	v = ',';

	while(a <= '7')
	{ 
		b = a + 1;
		while (b <= '8')
		{ 
			c = b + 1;
			while(c <= '9')
			{
				write(1, &a, 1);
					write(1, &b, 1);
						write(1, &c, 1);
							if(a < '7')
							{
								write(1, &v, 1);
							}
								c = c + 1;
			}

			b = b + 1;
		}

		a = a + 1;
	}
}

int main()
{
	ft_print_comb();
	return(0);
}
