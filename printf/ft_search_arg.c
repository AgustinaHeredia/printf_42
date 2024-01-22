/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusheredia <agusheredia@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:36:45 by agheredi          #+#    #+#             */
/*   Updated: 2024/01/22 19:57:19 by agusheredia      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_search_arg(const char *format, t_sc *sc)
{
	if (*format == 'c')
		ft_arg_c(sc);
	else if (*format == 's')
		ft_arg_s(sc);
	else if (*format == 'p')
		ft_arg_p(sc);
	else if (*format == 'd')
		ft_arg_d(sc, 'd');
	else if (*format == 'i')
		ft_arg_d(sc, 'i');
	else if (*format == 'u')
		ft_arg_u(sc);
	else if (*format == 'x')
		ft_arg_x(sc, 'x');
	else if (*format == 'X')
		ft_arg_x(sc, 'X');
	else if (*format == '%')
		ft_arg_porcent(sc);
	else
	{
		sc->error = 1;
		return (NULL);
	}
	format++;
	return (format);
}
