/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:16:40 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/21 20:37:19 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (is_prime(nb) == 1)
		return (nb);
	while (i < nb)
	{
		nb++;
		if (is_prime(nb) == 1)
			return (nb);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    printf("%d", ft_find_next_prime(32));
}*/
