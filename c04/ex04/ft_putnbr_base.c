/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:35:22 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/21 09:59:34 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	isbase(char *base)
{
	int	i;

	i = 0;
	if (length(base) < 2)
		return (0);
	else
	{
		while (base[i])
		{
			if (base[i] == '-' || base[i] == '+')
				return (0);
			i++;
		}
	}
	i = 0;
	while (i < length(base) - 1)
	{
		if (base[i] == base[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (isbase(base))
	{
		nb = nbr;
		if (nb < 0)
		{
			print('-');
			nb *= -1;
		}
		if (nb >= length(base))
			ft_putnbr_base(nb / length(base), base);
		print(base[nb % length(base)]);
	}
}
