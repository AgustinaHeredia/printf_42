/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:24:23 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 23:05:01 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	a;
	int		i;

	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		if (write(1, "-", 1) == -1)
			return (-1);
		i++;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
	}
	a = nb % 10 + '0';
	if (write(1, &a, 1) == -1)
		return (-1);
	i++;
	return (i);
}
