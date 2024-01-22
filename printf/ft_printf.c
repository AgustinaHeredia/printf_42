/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:33:56 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 23:43:42 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_sc	*ft_inicializa_sc(t_sc *sc)
{
	sc->len = 0;
	sc ->width = 0;
	sc->error = 0;
	return (sc);
}

int	ft_printf(char const *format, ...)
{
	t_sc	*sc;
	int		result;

	sc = (t_sc *) malloc(sizeof(t_sc));
	if (!sc)
		return (-1);
	ft_inicializa_sc(sc);
	va_start(sc->arg, format);
	result = 0;
	while (*format)
	{
		if (*format == '%')
			format = ft_search_arg(format + 1, sc);
		else
			format = ft_read_text(sc, format);
	}
	va_end(sc->arg);
	result += sc->len;
	if (sc->error == 1)
	{
		free(sc);
		return (-1);
	}
	free(sc);
	return (result);
}
