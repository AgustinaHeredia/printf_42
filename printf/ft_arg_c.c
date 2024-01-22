/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:58:59 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 20:06:25 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg_c(t_sc *sc)
{
	char	ch;

	ch = va_arg(sc->arg, int);
	if (ft_putchar(ch) == -1)
		sc->error = 1;
	sc -> len += 1;
}
