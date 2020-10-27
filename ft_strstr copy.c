/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:58:56 by itieu             #+#    #+#             */
/*   Updated: 2020/10/27 12:09:43 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char			*begin;
	char			*to_find_cp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		begin = str;
		to_find_cp = to_find;
		while (*to_find_cp == *str)
		{
			++str;
			++to_find_cp;
		}
		if (*to_find_cp == '\0')
			return (begin);
		str = begin + 1;
	}
	return ((char *)0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "I am the new one";
	char str2[] = "new";

	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	printf("ft_strstr = %s\n", ft_strstr(str1, str2));
	printf("rl strstr = %s\n", strstr(str1, str2));
		return (0);
}
