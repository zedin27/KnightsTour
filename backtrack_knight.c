/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_knight.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 09:51:13 by ztisnes           #+#    #+#             */
/*   Updated: 2017/11/01 22:11:39 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#define SIZE 8

void	print_board(void)
{
	char **gameboard;
	int i;

	i = -1;
	gameboard = (char**)malloc(sizeof(char*) * SIZE);
	while(++i < SIZE)
	{
		gameboard[i] = (char*)malloc(sizeof(char) * SIZE)
		//Value of gameboard equal to '0'
	}
}

//int		backtrack_knight(int x, int y, )
/*
**	Gerenate 2D array
**		if it cover all tours
**			print the path
*/
