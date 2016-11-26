/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 20:13:21 by glasset           #+#    #+#             */
/*   Updated: 2016/11/26 21:25:12 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

void	t_cat(void)
{
	char	file[] = "test/cat.c";
	int		fd;

	printf("test cat:\n");
	fd = open(file, O_RDONLY);
	printf("fd%d\n", fd);
	ft_cat(fd);
	close(fd);

	fd = open("cat.c", O_RDONLY);
	printf("fd%d\n", fd);
	ft_cat(fd);
}
