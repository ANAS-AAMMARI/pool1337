/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaammari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:24:17 by aaammari          #+#    #+#             */
/*   Updated: 2021/08/18 12:02:49 by aaammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, char *to_find, int i)
{
	int	chck;
	int	j;

	j = 0;
	chck = 0;
	while (to_find[j])
	{
		if (str[i + j] != to_find[j])
		{
			chck = 1;
			break ;
		}
		j++;
	}
	return (chck);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	chck;

	i = 0;
	j = 0;
	chck = 0 ;
	if (! to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			chck = check(str, to_find, i);
			if (chck == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
