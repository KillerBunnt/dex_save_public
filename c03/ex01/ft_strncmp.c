/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:47:50 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/30 14:04:24 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	a;

	a = 0;
	while (n > 0)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			return (s1[a] - s2[a]);
		else if (s1[a] == '\0' && s2[a] != '\0')
			return (s1[a] - s2[a]);
		else if (s1[a] != '\0' && s2[a] == '\0')
			return (s1[a] - s2[a]);
		else if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		else if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
		n--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(int a, char **b)
{
	int c = ft_strncmp(b[1], b[2], (unsigned int)(b[3] - '0'));
	printf("what i  got: %d \n", ft_strncmp(b[1], b[2], 0));
	printf("what it got: %d \n", strncmp(b[1], b[2], 0));
	return 0;
}
*/
