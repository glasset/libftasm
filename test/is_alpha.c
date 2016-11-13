/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_alpha.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:21:28 by glasset           #+#    #+#             */
/*   Updated: 2016/11/13 18:39:08 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include "test.h"

void		t_isalpha(void)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < 256)
	{
		if (ft_isalpha(i) != isalpha(i))
			printf("isalpha fail: %c\n", i);
		if (ft_islower(i) != islower(i))
			printf("islower fail: %c\n", i);
		if (ft_isupper(i) != isupper(i))
			printf("isupper fail: %c\n", i);
		i++;
	}
}
