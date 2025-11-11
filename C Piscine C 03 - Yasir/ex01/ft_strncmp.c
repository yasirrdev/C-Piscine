/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:55:47 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/14 22:03:36 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned int) s1[i] - (unsigned int) s2[i]);
}
/*
int     main(void)
{
        char cadena1[] = "Hola";
        char cadena2[] = "Hola";
        char cadena3[] = "Adios";
        char cadena4[] = "Adiós";

        int num1 = ft_strncmp(cadena1, cadena2,2); 
        // 0
        int num2 = ft_strncmp(cadena2, cadena3,2); 
        // 7
        int num3 = ft_strncmp(cadena4, cadena3,2); 
        // 0

        printf("%d\n", num1);
        printf("%d\n", num2);
        printf("%d\n", num3);
        return (0);
}*/
