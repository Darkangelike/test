/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 17:07:41 by itieu             #+#    #+#             */
/*   Updated: 2020/10/26 17:03:35 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


#include <string.h>

int	main(void)
{
	char dest[] ="";
	char src[] = "jaifaimcoco";
	unsigned int size = 5;
	printf("ft: %d\n", ft_strlcpy(dest, src, size));
	printf("rl: %d\n", strlcpy(dest, src, size));
	return (0);
}
