/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:44:42 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/27 10:53:36 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == '\0' && s2[a] != '\0')
			return (s1[a] - s2[a]);
		else if (s1[a] != '\0' && s2[a] == '\0')
			return (s1[a] - s2[a]);
		else if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		else if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
/*
#include <unistd.h>
int main(int a, char **b)
{
	int c = ft_strcmp(b[1], b[2]);
	if (c == 0)
		write(1,"same shit",9);
	else if (c <0)
		write(1, "second line has bigger char or is longer",41);
	else
		write(1, "first line has bigger char or is longer",40);
	return 0;
}
*/
