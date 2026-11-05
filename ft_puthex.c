/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 11:05:48 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/05 16:27:31 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_get_base(int f)
{
	if (f)
		return ("0123456789abcdef");
	return ("0123456789ABCDEF");
}

int	ft_puthex(unsigned long n, int f)
{
	char	*str;
	int		i;
	int		arr[16];
	int		count;
	int		c;

	if (n == 0)
		return (ft_putchar('0'));
	str = ft_get_base(f);
	i = 0;
	while (n != 0)
	{
		arr[i] = str[n % 16];
		n /= 16;
		i++;
	}
	count = i;
	while (--i >= 0)
	{
		c = ft_putchar(arr[i]);
		if (c == -1)
			return (-1);
	}
	return (count);
}
