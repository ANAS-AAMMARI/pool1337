/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:29:55 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/11 10:45:04 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				h = tab[i];
				tab[i] = tab[j];
				tab[j] = h;
			}
			j++;
		}
		i++;
	}
}
