/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdexmund <tdexmund@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:16 by tdexmund          #+#    #+#             */
/*   Updated: 2024/03/30 14:42:56 by tdexmund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	while (dest[b] != '\0' && b < (int)size)
		b++;
	d = b;
	b = 0;
	while (src[b] != '\0')
		b++;
	c = d + b;
	while (d < ((int)size - 1) && src[a] != '\0')
	{
		dest[d] = src[a];
		a++;
		d++;
	}
	if (a != 0)
		dest[d] = '\0';
	return (c);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[12] = "hello";
	char *str2 = "why1234542";
	unsigned int a = 0;

	a =ft_strlcat(str1, str2, 10);
	printf("length:%d \n", a);
	printf("str1:%s \n", str1);
	printf("str2:%s \n", str2);
}
*/
