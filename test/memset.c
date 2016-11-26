/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:42:40 by glasset           #+#    #+#             */
/*   Updated: 2016/11/26 18:30:27 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	check(char *res, char *res2)
{
	if (!strcmp(res, res2))
		printf(".");
	else
		printf("x;%s|%s", res, res2);
	printf("\n");
}

void	t_memset(void)
{
	char	s1[] = "shortshortstring";
	char	*res = ft_memset(s1, 'x', 2);
	char	*res2 = memset(s1, 'x', 2);

	printf("test memset:\n");
	check(res, res2);
}

void	t_memcpy(void)
{
	char	s1[] = "replacethisby";
	char	s2[] = "that";
	char	*res = ft_memcpy(s1, s2, 3);
	char	*res2 = memcpy(s1, s2, 3);

	printf("test memcpy:\n");
	check(res, res2);
}

