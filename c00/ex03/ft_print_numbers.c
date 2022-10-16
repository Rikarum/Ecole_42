/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:27:51 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/16 18:38:57 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	say;

	say = '0';
	while (say <= '9')
	{
		write(1, &say, 1);
		say++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
