/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarac <rsarac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:28:22 by rsarac            #+#    #+#             */
/*   Updated: 2023/09/10 21:35:27 by rsarac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int src_len = 0;
    unsigned int i = 0;

    while (src[src_len] != '\0')
    {
        src_len++;
    }
    unsigned int copy_size = (size > 0) ? (size - 1) : 0;

    while (i < copy_size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    
    return src_len;
}