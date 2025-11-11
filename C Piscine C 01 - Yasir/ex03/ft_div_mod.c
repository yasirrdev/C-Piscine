/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:14:05 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/09 20:36:26 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int 	main(void)
{
	int a;
	int b;

	int rdiv;
	int rmod;

	int *div = &rdiv;
	int *mod = &rmod;
	a = 13;
	b = 2;

	ft_div_mod(a,b,div,mod);
	printf("Cociente es : %d\n", *div);
	printf("El resto es : %d\n", *mod);
	return (0);
}*/
