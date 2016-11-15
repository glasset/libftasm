/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:58:49 by glasset           #+#    #+#             */
/*   Updated: 2016/11/15 19:21:58 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"

void	print_res(int a, int b)
{
	if (a != b)
		printf("x");
	else
		printf(".");
}

int main(void)
{
	issomething();
	t_puts();
	t_strlen();
}
