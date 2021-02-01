/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ster-min <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:40:17 by ster-min          #+#    #+#             */
/*   Updated: 2021/01/25 16:40:20 by ster-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			++j;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		++i;
	}
	return (NULL);
}
