/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:22:39 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/24 10:29:50 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	r;

	r = 0;
	while (str[r] != '\0')
	{
		if (str[r] >= 'A' && str[r] <= 'Z')
			str[r] += 32;
		r++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	r;
	int	r1;

	r = 0;
	r1 = 1;
	ft_strlowcase(str);
	while (str[r] != '\0')
	{
		if (str[r] >= 'a' && str[r] <= 'z')
		{
			if (r1 == 1)
				str[r] -= 32;
			r1 = 0;
		}
		else if (str[r] >= '0' && str[r] <= '9')
			r1 = 0;
		else
			r1 = 1;
		r++;
	}
	return (str);
}
