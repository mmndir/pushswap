/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 19:57:41 by ealsomah          #+#    #+#             */
/*   Updated: 2022/10/04 20:06:04 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check(t_data *data)
{
	if (ft_is_duplicate(data->a, data->topa))
		error(data);
	sortarry(data);
	if (!ft_is_sorted(data))
		ft_push(data);
	ft_free(data);
}

void	error(t_data *data)
{
	free (data->indexarray);
	free (data->a);
	free (data->b);
	write(2, "Error\n", 6);
	exit (0);
}
