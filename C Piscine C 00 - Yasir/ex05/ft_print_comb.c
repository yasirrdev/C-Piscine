/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:47:21 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/08 21:39:35 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_char(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_char(x, y, z);
				if (!(x == '7' && y == '8' && z == '9'))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
