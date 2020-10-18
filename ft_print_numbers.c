/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:56:31 by itieu             #+#    #+#             */
/*   Updated: 2020/10/10 18:04:38 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int i;
	i = '0';

	while(i <= '9')
	{
		write(1, &i, 1);
		i++;

	}

}

int main ()
{

	ft_print_numbers();
	return(0);
}


