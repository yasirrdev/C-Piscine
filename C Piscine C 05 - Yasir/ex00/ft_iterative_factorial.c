/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:36:44 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/21 19:42:22 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	aux;

	i = 1;
	aux = nb - 1;
	if (nb <= 1)
		return (1);
	while (aux != 1)
	{
		nb *= aux;
		aux--;
	}
	return (nb);
}

int main()
{
	printf("%d", ft_iterative_factorial(-1));
}

