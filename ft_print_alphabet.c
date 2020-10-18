/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:27:14 by itieu             #+#    #+#             */
/*   Updated: 2020/10/10 17:37:41 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

void	ft_print_alphabet(void)
{

	char c;
	c = 'a';
	while (c  <= 'z')
	{
		write(1, &c, 1);
		c++;
	}

}

int main()
{
	ft_print_alphabet();
	return(0);
}

	

