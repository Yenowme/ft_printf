/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:31:11 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/26 20:42:50 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_type(va_list ap, const char **arg)
{
	int	rt;

	rt = 0;
	(*arg)++;
	if (**arg == '%')
		rt = ft_putchar(**arg);
	else if (**arg == 'c')
		rt = print_char(va_arg(ap, int));
	else if (**arg == 's')
		rt = print_string(va_arg(ap, char *));
	else if (**arg == 'd' || **arg == 'i')
		rt = print_int(va_arg(ap, int));
	else if (**arg == 'p')
		rt = print_pointer(va_arg(ap, unsigned long long));
	else if (**arg == 'x' || **arg == 'X' || **arg == 'u')
		rt = print_un(va_arg(ap, unsigned int), **arg);
	else if (!**arg)
		return (0);
	return (rt);
}

int	parse_arg(va_list ap, const char *arg)
{
	int	rt;

	rt = 0;
	while (*arg)
	{
		if (*arg == '%')
			rt += print_type(ap, &arg);
		else if (*arg)
			rt += ft_putchar(*arg);
		if (*arg)
			arg++;
	}
	return (rt);
}

int	ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		rt;

	va_start(ap, arg);
	rt = parse_arg(ap, arg);
	va_end(ap);
	return (rt);
}
