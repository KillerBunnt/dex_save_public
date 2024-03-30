/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:32:43 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/30 14:11:10 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		returnme(char *ostr, char *string);
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		c;
	char	*out;

	if (to_find[0] == '\0')
		return (str);
	c = returnme(str, to_find);
	if (c >= 0)
	{
		out = &str[c];
		return (out);
	}
	else
		return (NULL);
}

int	returnme(char *ostr, char *string)
{
	int	a;
	int	b;

	b = 0;
	a = 0;
	while (ostr[a] != '\0')
	{
		if (ostr[a] == string[b] || string[b] == '\0')
		{
			if (string[b + 1] == '\0')
				return (a - b);
			else if (string[b] != ostr[a] && string[b] != '\0')
				b = -1;
			b++;
		}
		a++;
	}
	return (-1);
}
/*
#include <stdio.h>
#include <string.h>
int main(int a, char **arg)
{
	printf("what i  got: %s\n", ft_strstr(arg[1], arg[2]));
	printf("what it got: %s\n", strstr(arg[1], arg[2]));
}
*/
