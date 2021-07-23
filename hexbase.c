/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexbase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeong-yena <jeong-yena@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:09:21 by jeong-yena        #+#    #+#             */
/*   Updated: 2021/07/23 18:23:12 by jeong-yena       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_hexsize(unsigned long long ag, int *m_size)
{
	while (ag > 0)
	{
		ag = ag / 16;
		(*m_size)++;
	}
}

void	hexbase(char *rt, int *i, unsigned long long ag)
{
	if (ag < 16)
	{
		rt[*i] = "0123456789abcdef"[ag];
		(*i)++;
		return ;
	}
	else
	{
		hexbase(rt, i, ag / 16);
		rt[*i] = "0123456789abcdef"[ag % 16];
		(*i)++;
		return ;
	}
}

char	*to_hexbase(unsigned long long ag)
{
	char	*rt;
	int		m_size;
	int		i;

	m_size = 0;
	i = 0;
	set_hexsize(ag, &m_size);
	rt = (char *)malloc(sizeof(char) * (m_size + 1));
	if (!rt)
		return (0);
	hexbase(rt, &i, ag);
	rt[i] = 0;
	return (rt);
}
