/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:12:06 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 17:32:20 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j <= nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[50] = "Bobo la praline";
	char str2[50] = "manger atoi";

	printf("ft: %s\n", ft_strncat(str1, str2, 6));
	printf("rl: %s\n", strncat(str1, str2, 6));
	return (0);
}
