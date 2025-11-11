/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:00:57 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/29 15:00:53 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (length);
}
/*
#include <stdio.h>
int main()
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&tab, 3, 8);
	if (size > 0)
	{
		while (i < size)
		{
			printf("%d\n", tab[i]);
			i++;
		}
		free(tab);
	}
}
*/
