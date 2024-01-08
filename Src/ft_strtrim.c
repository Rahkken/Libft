/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasabri <yasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:18:15 by yasabri           #+#    #+#             */
/*   Updated: 2023/12/22 17:16:29 by yasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	total;
	char	*trim_s;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	total = ft_strlen(s1);
	while (total > start && ft_strchr(set, s1[total - 1]) != NULL)
		total--;
	trim_s = malloc((total - start) + 1);
	if (!trim_s)
		return (NULL);
	i = 0;
	while (start < total)
		trim_s[i++] = s1[start++];
	trim_s[i] = '\0';
	return (trim_s);
}
