/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:03:17 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/23 18:13:39 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int ag)
{
	int	rt;

	rt = 0;
	ft_putnbr(ag, &rt);
	return (rt);
}

int	print_un(unsigned int ag, char format)
{
	char	*hex;
	int		rt;
	int		i;

	rt = 0;
	i = 0;
	if (format == 'u')
		ft_putun(ag, &rt);
	else
	{
		hex = to_hexbase((unsigned long long)ag);
		if (!hex)
			return (0);
		if (format == 'X')
		{
			while (hex[i])
			{
				hex[i] = (char)ft_toupper(hex[i]);
				i++;
			}
		}
		rt = ft_putstr(hex);
		free(hex);
	}
	return (rt);
}

int	print_pointer(unsigned long long ag)
{
	int		rt;
	char	*pointer;

	if (!ag)
	{
		rt = ft_putstr("0x0");
		return (rt);
	}
	pointer = to_hexbase(ag);
	if (!pointer)
		return (0);
	rt = ft_putstr("0x");
	rt += ft_putstr(pointer);
	free(pointer);
	return (rt);
}
