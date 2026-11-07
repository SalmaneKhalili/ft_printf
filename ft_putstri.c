/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 10:19:17 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/07 09:04:49 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri(char *str)
{
	int	i;
	int	c;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		c = ft_putchr(str[i++]);
		if (c == -1)
			return (c);
	}
	return (i);
}
