/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 23:33:10 by ztisnes           #+#    #+#             */
/*   Updated: 2017/11/02 00:17:04 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft.h"
#include <stdio.h>
#include <unistd.h>
#define SIZE 8

// char	**print_board(void)
// {
// 	char **gameboard; //char gameboard[SIZE][SIZE];
// 	int i;
// 	int j;
//
// 	i = -1;
// 	gameboard = (char**)malloc(sizeof(char*) * SIZE);
// 	while(++i < SIZE)
// 	{
// 		gameboard[i] = (char*)malloc(sizeof(char*) * SIZE);
// 		j = -1;
// 		while (++j < SIZE)
// 		{
// 			//gameboard[i][j] = (char*)malloc(sizeof(char*) * SIZE);
// 			gameboard[i][j] = '0';
// 			printf("%c", gameboard[i][j]);
// 		}
// 		//Value of gameboard equal to '0'
// 		printf("\n");
// 	}
// 	return &(*gameboard);
// }

void	**print_board(void)
{
	char **gameboard;
	int i;

	i = -1;
	gameboard = (char**)malloc(sizeof(char*) * SIZE);
	if (gameboard == NULL)
		return (NULL);
	while(++i < SIZE)
	{
		gameboard[i] = (char*)malloc(sizeof(char) * SIZE);
		*gameboard[i] = '0';
		printf("%s", gameboard[i]);
		//Value of gameboard equal to '0'
	}
	return *(*gameboard);
}

int		main()
{
	print_board();
	return (0);
}
