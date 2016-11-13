/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:21:28 by glasset           #+#    #+#             */
/*   Updated: 2016/11/13 19:18:34 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include "test.h"

static void	print_res(int a, int b)
{
	if (a != b)
		printf("x");
	else
		printf(".");
}

void		issomething(void)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		printf("(%d: ", i);
		print_res(ft_isalpha(i), isalpha(i));
		print_res(ft_islower(i), islower(i));
		print_res(ft_isupper(i), isupper(i));
		print_res(ft_isdigit(i), isdigit(i));
		print_res(ft_isalnum(i), isalnum(i));
		print_res(ft_isascii(i), isascii(i));
		printf(")");
		if (i % 10 == 0)
			printf("\n");
		i++;
	}
	printf("\n");
}
