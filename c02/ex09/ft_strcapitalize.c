/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarac <rsarac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:49:06 by rsarac            #+#    #+#             */
/*   Updated: 2023/09/10 21:34:50 by rsarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	kont 	
	kont = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') ||( *str >= 'A' && *str<= 'Z') ||(*str>= '0' && *str <= '9'))
		{
			if (kont)
			{
				if (*str >='a' && *str <='z')
				{
					*str = *str - 'a' + 'A';
				}
				kont = 0;
			}
			else
			{
				if ( *str >= 'A' && *str <= 'Z')
				{
					*str = *str - 'A' + 'a';
				}
				kont=0;
			}
		}
		else
		{
			kont = 1;
		}
		str++;
	}
	return (str);
}
