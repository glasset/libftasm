/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 23:56:02 by glasset           #+#    #+#             */
/*   Updated: 2016/11/27 01:14:37 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

static void		test(char *str, char c, int rand_size)
{
	int		i = strlen(str) - rand_size;
	char	*res = ft_memchr(str, c, i);
	char	*res2 = memchr(str, c, i);

	check(res, res2);
}

void			t_memchr(void)
{
	printf("test memchr:\n");

	test("shortAmiddleString", 'A', 0);
	test("SfirstChar", 'S', 0);
	test("lastCharD", 'D', 0);
	test("404CharNotFound", 'X', 0);
	test("404LenNotFounP", 'P', 3);
	printf("\n");
}
