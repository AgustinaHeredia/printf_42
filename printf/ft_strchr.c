/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:02:43 by agustinaher       #+#    #+#             */
/*   Updated: 2023/06/06 21:04:50 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*chr;

	i = 0;
	chr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			chr = (char *)&s[i];
			return (chr);
		}
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (chr);
}
