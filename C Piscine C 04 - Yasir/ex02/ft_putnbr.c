/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:08:04 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/20 17:30:18 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	temp;

	temp = nb;
	if (temp < 0)
	{
		temp = temp * -1;
		ft_putchar('-');
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
	}
	ft_putchar((temp % 10) + '0');
}
/*
int main(void)
{
	ft_putnbr(-199);
}
*/
