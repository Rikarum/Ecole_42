/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haliskan <haliskan@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:06:14 by haliskan          #+#    #+#             */
/*   Updated: 2022/10/24 03:06:17 by haliskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	h;
	unsigned int	c;

	h = ft_strlen(dest);
	if (size <= h)
	{
		return (size + ft_strlen(src));
	}
	c = 0;
	while (src[c] && size > h + 1)
	{
		dest[h] = src[c];
		h++;
		c++;
	}
	dest[h] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[c]));
}
