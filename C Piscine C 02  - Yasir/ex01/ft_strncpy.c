/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:12:33 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/14 11:29:43 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main (void)
{
	char cadena_origen[] = "Holaa";
	char cadena_destino[30];

        printf("1º %s", cadena_destino);

        ft_strncpy(cadena_destino, cadena_origen, 2);

        printf("2º %s", cadena_destino);
}
*/
