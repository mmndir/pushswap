/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealsomah <ealsomah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:00:15 by ealsomah          #+#    #+#             */
/*   Updated: 2022/09/11 20:00:18 by ealsomah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
char	**ft_split(const char *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2, int flag);
#endif
