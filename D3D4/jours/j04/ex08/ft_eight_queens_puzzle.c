/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 11:18:36 by mouaret           #+#    #+#             */
/*   Updated: 2015/12/15 15:24:37 by mouaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Here we can print all found configurations :
** Just test if (nb == 8), and print the content of array (board[8][8])
*/

int	board_complete(int board[8][8])
{
	int i;
	int j;
	int nb;

	nb = 0;
	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			nb += board[i][j++];
		i++;
	}
	return (nb / 8);
}

int	is_pos_ok(int board[8][8], int i, int j)
{
	if ((i >= 0) && (i < 8) && (j >= 0) && (j < 8))
	{
		if (board[i][j] == 0)
			return (1);
		else
			return (0);
	}
	return (1);
}

int	is_lig_col_empty(int board[8][8], int lig, int col)
{
	int k;

	k = 0;
	while (++k < 8)
		if ((!is_pos_ok(board, lig + k, col + k)) ||
			(!is_pos_ok(board, lig + k, col - k)) ||
			(!is_pos_ok(board, lig - k, col - k)) ||
			(!is_pos_ok(board, lig - k, col + k)))
			return (0);
	k = 0;
	while (k < 8)
		if (board[lig][k++] != 0)
			return (0);
	k = 0;
	while (k < 8)
		if (board[k++][col] != 0)
			return (0);
	return (1);
}

int	ft_fill_lig(int board[8][8], int pos_lig, int *nb)
{
	int k;

	if (9 == pos_lig)
		return (1);
	k = -1;
	while (++k < 8)
		if (0 == board[pos_lig][k])
		{
			if ((is_lig_col_empty(board, pos_lig, k)))
			{
				board[pos_lig][k] = 1;
				if (!ft_fill_lig(board, pos_lig + 1, nb))
					board[pos_lig][k] = 0;
			}
		}
	nb[0] += board_complete(board);
	return (0);
}

int	ft_eight_queens_puzzle(void)
{
	int board[8][8];
	int nb;
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			board[i][j++] = 0;
		i++;
	}
	nb = 0;
	ft_fill_lig(board, 0, &nb);
	return (nb);
}
