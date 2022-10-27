/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:09:07 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/26 19:20:53 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	r;

	r = 0;
	while (src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	dest[r] = '\0';
	return (dest);
}