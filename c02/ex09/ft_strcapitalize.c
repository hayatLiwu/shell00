/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarac <rsarac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:49:06 by rsarac            #+#    #+#             */
/*   Updated: 2023/09/11 18:07:20 by rsarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ornek(int *kont, char *str)
{
	if (*kont == 1)
	{
		if (*str >='a' && *str <='z')
			*str = *str - 'a' + 'A';
	}
	else
	{
		if ( *str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
	} 
}

char	*ft_strcapitalize(char *str)
{
	int	kont;

	kont = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') ||( *str >= 'A' && *str<= 'Z') 
		||(*str>= '0' && *str <= '9'))
		{
			ornek(&kont,str);
			kont = 0;
		}
		else
			kont = 1;
		++str;
	}
	return (str);
}



#include <stdio.h>
int main()
{
	char dest[]="ali9Ata+bAk";

	ft_strcapitalize(dest);

	printf("%s",dest);

}