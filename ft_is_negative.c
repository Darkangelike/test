/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 18:05:30 by itieu             #+#    #+#             */
/*   Updated: 2020/10/10 18:19:44 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n <= -1)
	{
		write(1, "N", 1);
	}
	else if (n >= 0)
	{
		write(1, "P", 1);
	}

}

int main()
{
	ft_is_negative(5);
	return(0);
}

