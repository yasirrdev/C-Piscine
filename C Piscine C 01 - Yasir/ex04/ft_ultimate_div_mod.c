/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:56:20 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/09 20:14:42 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int main (void){

int a = 22;
int b = 3;
ft_ultimate_div_mod(&a,&b);
printf("Cociente: %d\n", a);
printf("Resto: %d\n", b);
return(0);
}*/
