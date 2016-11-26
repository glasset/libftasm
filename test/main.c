/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:58:49 by glasset           #+#    #+#             */
/*   Updated: 2016/11/27 00:01:30 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	print_res(int a, int b)
{
	if (a != b)
		printf("x");
	else
		printf(".");
}

void	check(char *res, char *res2)
{
	if (!strcmp(res, res2))
		printf(".");
	else
		printf("x;%s|%s", res, res2);
}

int main(void)
{
	t_cat();
	t_puts();
	issomething();
	t_strlen();
	t_memset();
	t_memcpy();
	t_memchr();
	t_strdup();
}
