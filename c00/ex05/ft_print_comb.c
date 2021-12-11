/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:24:01 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/06 12:09:08 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(int x, int r, int t)
{
	write(1, &x, 1);
	write(1, &r, 1);
	write(1, &t, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	r;
	int	t;

	x = 0;
	while (x < 8)
	{
		r = x + 1;
		while (r < 9)
		{
			t = r + 1;
			while (t < 10)
			{
				print(x + '0', r + '0', t + '0');
				if (x == 7)
					break ;
				else
					write(1, ", ", 2);
				t++;
			}
			r++;
		}
		x++;
	}
}
