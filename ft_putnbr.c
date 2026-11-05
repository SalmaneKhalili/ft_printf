/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:07:02 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/05 16:22:51 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int		count;
	char	*str;
	int		c;

	count = 0;
	str = ft_itoa(nb);
	if (!str)
		return (-1);
	c = ft_putstr(str);
	if (c == -1)
	{
		free(str);
		return (c);
	}
	count += c;
	free(str);
	return (count);
}
