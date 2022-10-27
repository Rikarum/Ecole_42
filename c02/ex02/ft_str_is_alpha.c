/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:03:41 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/24 21:06:51 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if ((str[r] < 'a' || str[r] > 'z') && (str[r] < 'A' || str[r] > 'Z'))
		{
			return (0);
		}
		r++;
	}
	return (1);
}
