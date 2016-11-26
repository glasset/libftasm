/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:07:34 by glasset           #+#    #+#             */
/*   Updated: 2016/11/26 23:46:49 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   LIBFTS_H
# define  LIBFTS_H
# include <stddef.h>

void		ft_bzero(void *s, size_t n);
char		*ft_strcat(char* s1, const char *s2);
int			ft_isalpha(int c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_puts(const char *s);
size_t		ft_strlen(const char *);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void* dst, const void* src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strdup(const char *s1);
void		ft_cat(int fd);


#endif
