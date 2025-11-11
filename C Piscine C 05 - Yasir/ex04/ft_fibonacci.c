/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:44:59 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/21 19:42:59 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
	printf("%d", ft_fibonacci(3));
}
*/
