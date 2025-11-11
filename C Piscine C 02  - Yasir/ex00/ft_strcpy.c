/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:24:59 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/14 11:26:34 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main (void)
{
	char cadena_origen[] = "Hola";
	char cadena_destino[10];	
	
        printf("1º %s", cadena_destino);
        

	ft_strcpy(cadena_destino, cadena_origen);
	
	printf("2º %s", cadena_destino);
}
*/
