/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 01:55:42 by glasset           #+#    #+#             */
/*   Updated: 2016/11/27 13:45:39 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	t_strjoin(void)
{
	printf("test strjoin:\n");

	free(ft_strjoin("testAllocate", "good"));

	check(
			ft_strjoin("hello", "world"),
			"helloworld"
		 );
	check(
			ft_strjoin("h", "d"),
			"hd"
		 );
	check(
			ft_strjoin("hello", "world"),
			"helloworld"
		 );
	check(
			ft_strjoin("hello", ""),
			"hello"
		 );
	check(
			ft_strjoin("", "world"),
			"world"
		 );
	check(
			ft_strjoin("", ""),
			""
		 );
	printf("\n");
}
