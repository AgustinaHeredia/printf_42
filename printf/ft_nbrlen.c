/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:06:27 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/03 23:37:36 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n, char c)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	if (c == 'x' || c == 'X')
	{
		while ((n / 16) != 0)
		{
			n = n / 16;
			len++;
		}
	}
	else
	{
		while ((n / 10) != 0)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}
