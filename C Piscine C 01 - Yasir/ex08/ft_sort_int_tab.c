/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:56:49 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/10 13:46:39 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;
	int	swapped;

	start = 0;
	size -= 1;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		end = 0;
		while (end < size - start)
		{
			if (tab[end] > tab[end + 1])
			{
				temp = tab[end];
				tab[end] = tab [end + 1];
				tab[end + 1] = temp;
				swapped = 1;
			}
			end++;
		}
		start++;
	}
}
/*
int main(void)
{
	int nums[9] = {4,6,7,9,2,8,1,3,5};
	int size = 9;
	
	for(int j = 0; j < size; j++) {
        printf("%d ", nums[j]);
    	}

	ft_sort_int_tab(nums, size);
	printf("\n");
        for(int i = 0; i< size; i++) {
        printf("%d ", nums[i]);
        }

}*/
