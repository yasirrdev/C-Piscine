/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:11:34 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/21 19:42:33 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main(void)
{
	int factorial = ft_recursive_factorial(5);
	printf("%d", factorial);
	return (0);
}
*/
