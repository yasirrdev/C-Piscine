/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:30:04 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/29 14:57:26 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*nums;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	nums = malloc(sizeof(int) * len);
	if (!nums)
		return (NULL);
	i = 0;
	while (min < max)
	{
		nums[i] = min;
		min++;
		i++;
	}
	return (nums);
}
/*
int	main(void)
{
	int i;
	int *num;

	i = 0;
	num =  ft_range(10, 30);
	while(num[i])
	{
		printf("%d", num[i]);
		i++;
	}
	return (0);
}
*/
