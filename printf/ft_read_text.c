/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:57:45 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 23:17:40 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*ft_read_text(t_sc *sc, const char *format)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		sc ->width = next - format;
	else
		sc -> width = ft_strlen(format);
	if (write(1, format, sc -> width) == -1)
		sc->error = 1;
	sc -> len += sc -> width;
	while (*format && *format != '%')
		++format;
	if (*format == '%' && *(format + 1) == '%')
	{
		if (write(1, format, 1) == -1)
			sc->error = 1;
		sc->len++;
		format++;
	}
	return (format);
}
