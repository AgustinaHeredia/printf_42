/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:45:30 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 20:13:32 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg_d(t_sc *sc, char c)
{
	int	d;

	d = va_arg(sc->arg, int);
	if (ft_putnbr(d) == -1)
		sc->error = 1;
	sc -> len += ft_nbrlen(d, c);
}
