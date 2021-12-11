/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:50:58 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/21 14:52:47 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	val;

	val = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			 s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val *= 10;
		val += str[i] - 48;
		i++;
	}
	return (val * s);
}