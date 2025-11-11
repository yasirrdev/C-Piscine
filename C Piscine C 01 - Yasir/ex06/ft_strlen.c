/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:25:44 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/09 21:45:06 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
int main (void)
{	
	char str[] = "buenaz";
	int n;
	n = ft_strlen(str);
	printf("tiene %d", n);
	return (0);
}*/
