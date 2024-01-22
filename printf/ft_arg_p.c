/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:51:11 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 23:33:29 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(t_sc *sc, unsigned long p)
{
	char			hex[16];
	int				i;
	int				len;

	len = ft_numlen_ptr(p);
	i = 0;
	while (p > 0 && i < 16)
	{
		hex[i] = "0123456789abcdef"[p % 16];
		p /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		if (ft_putchar(hex[i]) == -1)
			sc->error = 1;
	}
	sc->len += len;
}

int	ft_numlen_ptr(unsigned long p)
{
	int				len;

	len = 0;
	if (p == 0)
		return (1);
	while (p > 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

void	ft_arg_p(t_sc *sc)
{
	unsigned long	p;

	p = va_arg(sc->arg, unsigned long);
	if (!p)
	{
		if (ft_putstr("0x0") == -1)
			sc->error = 1;
		sc->len += 3;
	}
	else
	{
		ft_putstr("0x");
		ft_putptr(sc, p);
		sc->len += ft_numlen_ptr(p) + 2;
	}
}
