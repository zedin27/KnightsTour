/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_knight.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 09:51:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/10/28 00:36:49 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#define SIZE 8

void	print_board(void)
{
	char gameboard[SIZE][SIZE];
	int i;
	int j;

	i = -1;
	j = -1;
	gameboard = {{'0'}};
	while(i++ < SIZE)
	{
		while(j++ < SIZE)
		{
			ft_putstr(&gameboard[i][j]);
			ft_putchar('\n');
		}
		ft_putchar('\n');
	}
}

//int		backtrack_knight(int x, int y, )
/*
**	Gerenate 2D array
**		if it cover all tours
**			print the path
*/
