/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:21:53 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 20:58:15 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	char	hex[16];
	int		i;
	int		f;

	if (n == 0)
	{
		f = ft_putchar('0');
		return (f);
	}
	i = 0;
	while (n > 0)
	{
		hex[i] = "0123456789abcdef"[n % 16];
		n /= 16;
		i++;
	}
	f = i;
	while (i > 0)
	{
		i--;
		if (ft_putchar(hex[i]) == -1)
			return (-1);
	}
	return (f);
}

int	ft_puthex_upper(unsigned int n)
{
	char	hex[16];
	int		i;
	int		f;

	if (n == 0)
	{
		f = ft_putchar('0');
		return (f);
	}
	i = 0;
	while (n > 0)
	{
		hex[i] = "0123456789ABCDEF"[n % 16];
		n /= 16;
		i++;
	}
	f = i;
	while (i > 0)
	{
		i--;
		if (ft_putchar(hex[i]) == -1)
			return (-1);
	}
	return (f);
}

int	ft_numlen_hex(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	ft_arg_x(t_sc *sc, char c)
{
	unsigned int	num;

	num = va_arg(sc->arg, unsigned int);
	if (c == 'x')
	{
		if (ft_puthex_lower(num) == -1)
			sc->error = 1;
	}
	else if (c == 'X')
	{
		if (ft_puthex_upper(num) == -1)
			sc->error = 1;
	}
	sc->len += ft_numlen_hex(num);
}
