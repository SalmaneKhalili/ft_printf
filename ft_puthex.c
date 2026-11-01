/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 11:05:48 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 11:54:01 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n)
{
	char	*str;
	int		i;
	int		arr[16];
	int		count;

	if (n == 0)
		return (ft_putchar('0'));
	str = "0123456789abcdef";
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

int	main(void)
{
	ft_puthex(0);
	ft_putchar('\n');
	ft_puthex(16);
	ft_putchar('\n');
	ft_puthex(2131564);
}
