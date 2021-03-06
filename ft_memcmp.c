/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:38:20 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/05 10:55:55 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1_temp;
	unsigned char	*str2_temp;

	i = 0;
	str1_temp = (unsigned char *)str1;
	str2_temp = (unsigned char *)str2;
	while (i < n)
	{
		if (str1_temp[i] != str2_temp[i])
			return (str1_temp[i] - str2_temp[i]);
		i++;
	}
	return (0);
	i = 0;
}
