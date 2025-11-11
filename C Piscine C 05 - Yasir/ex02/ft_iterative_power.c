/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:10:19 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/21 19:42:39 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= aux;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(7, 0));
}
*/
