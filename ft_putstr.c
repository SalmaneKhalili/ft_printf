/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 10:19:17 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/05 16:21:15 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	c;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		c = ft_putchar(str[i++]);
		if (c == -1)
			return (c);
	}
	return (i);
}
