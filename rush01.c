/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:08:59 by staylan           #+#    #+#             */
/*   Updated: 2024/01/31 14:44:07 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	rush_control(int x, int y)
{
	int	j;
	int	i;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i != 1 && i == y && j != 1 && j == x))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if (((i == 1 || i == y) && (j != 1 || j != x)))
				ft_putchar('*');
			else if ((j == 1 || j == x) && (i != 1 || i != y))
				ft_putchar('*');
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
		write(1, "düzgün sayılarr gir ya o ne öyle!!!!", 39);
	else
		rush_control(x, y);
}
