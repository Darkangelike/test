/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:06:18 by itieu             #+#    #+#             */
/*   Updated: 2020/10/26 17:39:16 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "Hello there";
	char str2[] = " where are you";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("strcat: %s\n", ft_strcat(str1, str2));
	return (0);
}
