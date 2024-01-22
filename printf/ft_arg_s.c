/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:04:52 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 20:52:32 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg_s(t_sc *sc)
{
	char	*s;

	s = va_arg(sc->arg, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		sc -> len += 6;
	}
	else
	{
		if (ft_putstr(s) == -1)
			sc->error = 1;
		sc -> len += ft_strlen(s);
	}
}
