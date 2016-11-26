/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 23:56:02 by glasset           #+#    #+#             */
/*   Updated: 2016/11/27 00:40:48 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

static void		test(char *str, char c)
{
	int		i = strlen(str);
	char	*res = ft_memchr(str, c, i);
	char	*res2 = memchr(str, c, i);

	check(res, res2);
}

void			t_memchr(void)
{
	printf("test memchr:\n");

	test("shortAmiddleString", 'A');
	test("SfirstChar", 'S');
	test("lastCharD", 'D');
	printf("\n");
}
