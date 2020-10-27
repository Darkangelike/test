/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:59:48 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 15:43:37 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int n;

	n = size;
	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	if (size == 0 ||  n <= (dest[i] + 1))
		return (0);
	while (src[j] && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "hello";
	char str2[] = " heya";

	printf("ft: %u\n", ft_strlcat(str1, str2, 4));
	printf("rl: %lu\n", strlcat(str1, str2, 4));
	return (0);
}
