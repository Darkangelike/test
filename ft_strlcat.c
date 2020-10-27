/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:59:48 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 18:04:42 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	if (size == 0 || size < (dest[i] + 1))
		return (0);
	while (src[j] && j < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + j);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[11] = "hello";
	char str2[] = " heya";

	printf("rl: %lu\n", strlcat(str1, str2, 10));
	printf("ft: %u\n", ft_strlcat(str1, str2, 10));
	return (0);
}
