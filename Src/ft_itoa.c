/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:36:39 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:11:50 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

size_t	ft_size_n(int n)
{
	size_t	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*nptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_size_n(n);
	nptr = malloc(size + 1);
	if (!nptr)
		return (NULL);
	nptr[size] = '\0';
	size--;
	nptr[size] = '0';
	if (n < 0)
	{
		nptr[0] = '-';
		n *= -1;
	}
	while (n)
	{
		nptr[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (nptr);
}
