/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:44:52 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/17 11:18:35 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int main(void)
{
	char cadena_src[] = "hola";
	char cadena_dest[40] = "adios";
	
	ft_strncat(cadena_dest, cadena_src, 3);
	printf("%s", cadena_dest);
	return (0);
}*/
