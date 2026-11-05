/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:58:03 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/05 16:33:00 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(void *pt)
{
	int				count;
	unsigned long	val;
	int				c;

	if (pt == NULL)
	{
		count = ft_putstr("(nil)");
		if (count == -1)
			return (-1);
		return (count);
	}
	val = (unsigned long)pt;
	count = ft_putstr("0x");
	if (count == -1)
		return (-1);
	c = ft_puthex(val, 1);
	if (c == -1)
		return (-1);
	count += c;
	return (count);
}
