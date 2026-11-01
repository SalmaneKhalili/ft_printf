/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 09:43:11 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 10:51:02 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_handle_type(char c, va_list *p)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(*p, int));
	else if (c == 's')
		count = ft_putstr(va_arg(*p, char *));
	else if (c == 'p')
		count = ft_puthex(va_arg(*p, void *));
	else if (c == 'd')
		count = ft_putnbr(va_arg(*p, int));
	else if (c == 'i')
		count = ft_putnbr(va_arg(*p, int));
	else if (c == 'u')
		count = ft_putnbr(va_arg(*p, unsigned int));
	else if (c == 'x')
		count = ft_puthex(va_arg(*p, int));
	else if (c == 'X')
		count = ft_puthex_upper(va_arg(*p, int));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(char const *input, ...)
{
	va_list	args;
	int		i;
	int		n;

	va_start(args, input);
	i = 0;
	n = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			n += ft_handle_type(input[++i], &args);
			i++;
			continue ;
		}
		ft_putchar(input[i]);
		n++;
		i++;
	}
	va_end(args);
	return (n);
}

int	main(void)
{
	int	x;

	x = ft_printf("Hello %s\n", "salmane");
}
