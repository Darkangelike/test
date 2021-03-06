/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:45:43 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 16:55:24 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) || (s1[i] == s2[i]))
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <string.h>

int		main (void)
{
	char s1[] = "HelllaaaaaaA";
	char s2[] = "Hellla";

	printf("%s \n", s1);
	printf("%s \n", s2);
	printf("ft: %d \n", ft_strcmp(s1, s2));
	printf("rl: %d \n", strcmp(s1, s2));
	return (0);
}
