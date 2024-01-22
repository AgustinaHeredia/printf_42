/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:58:14 by agheredi          #+#    #+#             */
/*   Updated: 2023/06/06 21:03:11 by agustinaher      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_sc
{
	va_list	arg;
	int		len;
	int		width;
	int		error;
}				t_sc;

int			ft_printf(char const *format, ...);
const char	*ft_read_text(t_sc *sc, const char *format);
const char	*ft_search_arg(const char *format, t_sc *sc);
void		ft_arg_c(t_sc *sc);
void		ft_arg_d(t_sc *sc, char c);
void		ft_arg_p(t_sc *sc);
void		ft_arg_porcent(t_sc *sc);
void		ft_arg_s(t_sc *sc);
void		ft_arg_u(t_sc *sc);
void		ft_arg_x(t_sc *sc, char c);
void		ft_printhexa(unsigned long x, char c);
int			ft_nbrlen(unsigned int n, char c);
void		ft_putptr(t_sc *sc, unsigned long p);
int			ft_numlen_ptr(unsigned long p);
int			ft_putchar(char c);
int			ft_putnbr(int nb);
int			ft_putstr(char *s);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);

#endif
