/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarac <rsarac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:20 by rsarac            #+#    #+#             */
/*   Updated: 2023/09/06 18:43:22 by rsarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//  #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		printf("Hata: Sıfıra bölme hatası!\n");
		*div = 0; 
		*mod = 0;
	}
}
/*int main() {
    int num1 = 10;
    int num2 = 3;
    int div, mod;

    ft_div_mod(num1, num2, &div, &mod);

    printf("Bölüm: %d\n", div);
    printf("Kalan: %d\n", mod);

    return 0;
}*/
