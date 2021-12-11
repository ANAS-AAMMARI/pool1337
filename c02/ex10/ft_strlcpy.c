/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:23:45 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/15 18:10:51 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

#include<unistd.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	while (src[x] != '\0' )
	{
		x++;
	}
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
