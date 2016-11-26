/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 18:44:09 by glasset           #+#    #+#             */
/*   Updated: 2016/11/26 18:52:57 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	t_strdup(void)
{
	char	s1[] = "copymepls";
	char	s2[] = "";
	char	*res = ft_strdup(s1);
	char	*res2 = strdup(s1);

	printf("test strdup:\n");
	check(res, res2);
	res = ft_strdup(s2);
	res2 = strdup(s2);
	check(res, res2);
	printf("\n");
}

