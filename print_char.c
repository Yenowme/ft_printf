/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:28:30 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/17 16:58:13 by jeong-yena       ###   ########.fr       */
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

	rt = ft_putstr(arg);
	return (rt);
}
