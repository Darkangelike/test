/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:42:18 by itieu             #+#    #+#             */
/*   Updated: 2020/10/19 18:52:22 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 33 || str[index] > 126)
			return (0);
		index++;
	}
	return (1);
}
