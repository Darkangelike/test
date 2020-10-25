/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:45:43 by itieu             #+#    #+#             */
/*   Updated: 2020/10/25 18:33:39 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' || (s1[i] == s2[i]))
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main (void)
{
	char s1[] = "HelllA";
	char s2[] = "Hellla";

	printf("%s \n", s1);
	printf("%s \n", s2);
	printf("%d \n", ft_strcmp(s1, s2));
	return (0);
}
