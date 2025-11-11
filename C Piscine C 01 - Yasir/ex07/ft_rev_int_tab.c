/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:46:41 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/10 09:51:21 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}
/*
int main(void)
{
	int nums[] = {1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(nums, 9);
	for (int i = 0; i < 9; i++) {
         char buffer[2];
         buffer[0] = nums[i] + '0';
         buffer[1] = '\n';
         write(1, buffer, 2);
    	 }
	return(0);
}*/
