/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:36:29 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/10 18:02:18 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;

	i = 0;
	while (i < size / 2)
	{
		s = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = s;
		i++;
	}
}
