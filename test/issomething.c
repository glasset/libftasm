/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:21:28 by glasset           #+#    #+#             */
/*   Updated: 2016/11/15 19:22:49 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include "test.h"

void		issomething(void)
{
	int	i;

	i = 0;
	printf("test is_*:\n");
	while (i < 256)
	{
		printf("(0x%x: ", i);
		print_res(ft_isalpha(i), isalpha(i));
		print_res(ft_islower(i), islower(i));
		print_res(ft_isupper(i), isupper(i));
		print_res(ft_isdigit(i), isdigit(i));
		print_res(ft_isalnum(i), isalnum(i));
		print_res(ft_isascii(i), isascii(i));
		print_res(ft_isprint(i), isprint(i));
		print_res(ft_toupper(i), toupper(i));
		print_res(ft_tolower(i), tolower(i));
		printf(")");
		if (i % 8 == 0)
			printf("\n");
		i++;
	}
	printf("\n");
}
