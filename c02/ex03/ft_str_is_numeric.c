/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:01:53 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/24 16:03:03 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (!(str[r] >= 48 && str[r] <= 57))
			return (0);
		r++;
	}
	return (1);
}
