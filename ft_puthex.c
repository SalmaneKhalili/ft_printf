/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 11:05:48 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 14:28:51 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int f)
{
	char	*str;
	int		i;
	int		arr[16];
	int		count;

	if (n == 0)
		return (ft_putchar('0'));
	if (f)
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
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
		ft_putchar(arr[i]);
	}
	return (count);
}
