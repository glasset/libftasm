/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 18:28:07 by glasset           #+#    #+#             */
/*   Updated: 2016/11/27 01:55:19 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
#include "libfts.h"
#include <stdio.h>

void	issomething(void);
void	t_puts(void);
void	t_strlen(void);
void	t_memset(void);
void	t_memcpy(void);
void	t_memchr(void);
void	t_strdup(void);
void	t_cat(void);
void	t_strjoin(void);

void	check(char *res, char *res2);
void	print_res(int a, int b);
#endif
