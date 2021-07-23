/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:28:30 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/23 16:43:16 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int arg)
{
	int	rt;

	rt = ft_putchar((char)arg);
	return (rt);
}

int	print_string(char *arg)
{
	int	rt;

	if (!arg)
		rt = ft_putstr("(null)");
	else
		rt = ft_putstr(arg);
	return (rt);
}
