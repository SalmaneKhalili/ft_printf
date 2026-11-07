/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 09:43:11 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/07 09:10:43 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_put_invalid(char c)
{
	int	v;

	v = ft_putchr('%');
	if (v == -1)
		return (-1);
	v = ft_putchr(c);
	if (v == -1)
		return (-1);
	return (2);
}

static int	ft_handle_type(char c, va_list *p)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchr(va_arg(*p, int));
	else if (c == 's')
		count = ft_putstri(va_arg(*p, char *));
	else if (c == 'p')
		count = ft_putptr(va_arg(*p, void *));
	else if (c == 'd')
		count = ft_putnmbr(va_arg(*p, int));
	else if (c == 'i')
		count = ft_putnmbr(va_arg(*p, int));
	else if (c == 'u')
		count = ft_putnmbr(va_arg(*p, unsigned int));
	else if (c == 'x')
		count = ft_puthex(va_arg(*p, unsigned int), 1);
	else if (c == 'X')
		count = ft_puthex(va_arg(*p, unsigned int), 0);
	else if (c == '%')
		count = ft_putchr('%');
	else
		count = ft_put_invalid(c);
	return (count);
}

static int	ft_end_printf(va_list *args, int c)
{
	va_end(*args);
	return (c);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		i;
	int		n;
	int		val;

	va_start(args, input);
	i = 0;
	n = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == '\0')
				return (ft_end_printf(&args, -1));
			else
				val = ft_handle_type(input[++i], &args);
			i++;
		}
		else
			val = ft_putchr(input[i++]);
		if (val == -1)
			return (ft_end_printf(&args, val));
		n += val;
	}
	return (ft_end_printf(&args, n));
}
