/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:35:34 by glasset           #+#    #+#             */
/*   Updated: 2016/11/15 19:24:16 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"

void	t_puts(void)
{
	//todo redirect fd 1 into file
	printf("test puts:\n");
	print_res(ft_puts("SALUT"), puts("SALUT"));
	print_res(ft_puts(""), puts(""));
}
