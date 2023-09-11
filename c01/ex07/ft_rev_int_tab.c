/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarac <rsarac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 04:49:08 by rsarac            #+#    #+#             */
/*   Updated: 2023/09/09 04:49:58 by rsarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = tmp;
		i++;
	}
}
/* int main (){
	int arr[] = {2,0,2,7,6,9};
	ft_rev_int_tab(arr, 6);
	int i = 0;
	while( i < 6)
	{
		printf("%d", arr[i]);
		i++;
	}
} */
