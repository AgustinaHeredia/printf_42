/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:48:46 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 20:50:16 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putunsigned(unsigned int u)
{
	int	i;

	i = 1;
	if (u >= 10)
	{
		ft_putunsigned(u / 10);
		if (ft_putchar(((u % 10) + '0')) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar((u + '0')) == -1)
			return (-1);
	}
	return (i);
}

void	ft_arg_u(t_sc *sc)
{
	unsigned int	u;

	u = va_arg(sc->arg, unsigned int);
	if (ft_putunsigned(u) == -1)
		sc->error = 1;
	sc -> len += ft_numlen_unsigned(u);
}
