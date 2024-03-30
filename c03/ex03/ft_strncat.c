/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:42:09 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/30 14:11:40 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (b < (int)nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char mystring[100] = " UeJwPpHBiRqSwfAw";
	char writehere[100] = "pGegAwWdshNQhWV";

	printf("what i  wrote: %s\n", ft_strncat(writehere, mystring, 100));
	printf("what it wrote: %s\n", strncat(writehere, mystring, 100));
}
*/
