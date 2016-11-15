/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:21:33 by glasset           #+#    #+#             */
/*   Updated: 2016/11/15 19:30:55 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "test.h"
#include <string.h>

void	t_strlen(void)
{
	printf("test strlen:\n");

	print_res(ft_strlen(""), strlen(""));
	print_res(ft_strlen("test42"), strlen("test42"));
	print_res(ft_strlen("toto"), strlen("toto"));

	printf("\n");
}
