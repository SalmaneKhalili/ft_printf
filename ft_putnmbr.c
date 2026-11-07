/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:07:02 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/07 09:04:40 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnmbr(long nb)
{
	int		count;
	char	*str;
	int		c;

	count = 0;
	str = ft_ltoa(nb);
	if (!str)
		return (-1);
	c = ft_putstri(str);
	if (c == -1)
	{
		free(str);
		return (c);
	}
	count += c;
	free(str);
	return (count);
}
