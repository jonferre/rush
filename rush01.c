/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:35:42 by jonferre          #+#    #+#             */
/*   Updated: 2023/07/29 19:20:33 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.c" 

void	ft_putchar(char c);
void	ft_cima(int x);
void	ft_meio(int x, int y);
void	ft_baixo(int x);

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_cima(x);
		ft_meio(x, y);
		if (y >= 2)
			ft_baixo(x);
	}
}

void	ft_cima(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

void	ft_meio(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= (y - 2))
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 || i == x)
				ft_putchar('*');
			else
tchar				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_baixo(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}
