/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:09:01 by staylan           #+#    #+#             */
/*   Updated: 2024/01/31 14:44:12 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	rush_control(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1) && (j == 1 || j == x))
				ft_putchar('A');
			else if ((i == y) && (j == 1 || j == x))
				ft_putchar('C');
			else if (((i == 1 || i == y) && (j != 1 && j != x)))
				ft_putchar('B');
			else if (((i != 1 || i != y) && (j == 1 || j == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		write(1, "sütun satır sayısı 1den küçük olamaz", 40);
	else
		rush_control(x, y);
}
