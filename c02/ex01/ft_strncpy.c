/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerkoca <aerkoca@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:09:38 by aerkoca           #+#    #+#             */
/*   Updated: 2022/10/23 08:10:03 by aerkoca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	r;

	r = 0;
	while (src[r] != '\0' && r < n)
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
