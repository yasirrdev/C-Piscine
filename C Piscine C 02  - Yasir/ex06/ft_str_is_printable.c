/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:31:10 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/13 13:40:01 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        int valor;
        char palabra[] = "ADASDAS";
        valor = ft_str_is_uppercase(palabra);
        printf("%d", valor);
        return (0);
}
*/
