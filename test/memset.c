/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:42:40 by glasset           #+#    #+#             */
/*   Updated: 2016/11/26 17:55:23 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	t_memset(void)
{
	char	s1[] = "shortshortstring";
	char	*res = ft_memset(s1, 'x', 2);
	char	*res2 = memset(s1, 'x', 2);

	printf("test memset:\n");
	if (!strcmp(res, res2))
		printf(".");
	else
		printf("x;%s|%s", res, res2);
}

