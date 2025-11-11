/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:01:02 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/08 18:10:15 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra--;
	}
}
