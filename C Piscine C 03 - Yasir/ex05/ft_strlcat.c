/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:27:15 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/17 11:39:35 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_src;
	unsigned int	i;
	unsigned int	length_dest;

	length_src = ft_length(src);
	length_dest = ft_length(dest);
	i = 0;
	if (size <= length_dest)
		return (length_src + length_dest);
	while (src[i] != '\0' && i < (size - length_dest - 1))
	{
		dest[i + length_dest] = src[i];
		i++;
	}
	dest[i + length_dest] = '\0';
	return (length_src + length_dest);
}
/*
int	main(void)
{
	char cadena_src[] = "hola";
	char cadena_dest[40] = "adios";
	
	ft_strlcat(cadena_dest, cadena_src, 40);
	printf("%s", cadena_dest);
	return (0);
}*/
