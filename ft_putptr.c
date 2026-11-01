/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:58:03 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 14:42:26 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *pt)
{
	int				count;
	unsigned long	val;

	count = 0;
	if (pt == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	val = (unsigned long)pt;
	count += ft_putstr("0x");
	count += ft_puthex(val, 1);
	return (count);
}
