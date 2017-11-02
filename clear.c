/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 23:48:50 by ztisnes           #+#    #+#             */
/*   Updated: 2017/11/01 23:53:26 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#define SIZE 8

void	clear_board(int SIZE, double **gameboard)
{
	int i;

	i = -1;
	while (++i < SIZE)
		ft_memdel(gameboard[i])
	ft_memdel(gameboard);
}
