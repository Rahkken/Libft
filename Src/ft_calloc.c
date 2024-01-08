/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:49:59 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:10:57 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total;

	if (!nmemb || !size)
		return (malloc(0));
	total = nmemb * size;
	tab = malloc(total);
	if (!tab)
		return (NULL);
	ft_bzero(tab, total);
	return (tab);
}
