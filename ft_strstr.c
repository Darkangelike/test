/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:58:56 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 12:13:14 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;

	i = 0;
	if (tofind[0] == '\0')
		return (str);
	while (str[i])
	{
	j = 0;
		while (tofind[j])
		{
			if (str[i + j] == tofind[j])
			{
				j++;
			}
			else
				break;
		}
		if (tofind[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "I am the new one";
	char str2[] = "new";

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	printf("ft_strstr = %s\n", ft_strstr(str1, str2));
	printf("ft strstr = %s\n", strstr(str1, str2));
		return (0);
}
