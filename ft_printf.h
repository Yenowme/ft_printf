/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:30:17 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/21 16:28:48 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *arg, ...);

int		print_char(int arg);
int		print_string(char *arg);
int		print_int(int arg);
int		print_un(unsigned int arg, char format);
int		print_pointer(unsigned long long ag);

char	*to_hexbase(unsigned long long arg);

#endif
