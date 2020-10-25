/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:20:24 by itieu             #+#    #+#             */
/*   Updated: 2020/10/25 18:57:19 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (((s1[i] && s2[i]) != '\0') || (i < n) || (s1[i] == s2[i]))
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
				return (s1[i] - s2[i]);
		i++;
	}
	return (0);
	}

            int        main (void)
        {
            char s1[] = "Hellllll";
            char s2[] = "Helll";
            
            printf("%s \n", s1);
            printf("%s \n", s2);
            printf("%d \n", ft_strncmp(s1, s2, 5));
            return (0);
        }
