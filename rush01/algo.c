/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:30:33 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/06 19:40:17 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_matrix(int **matrix)
{
	int	i;
	
	i = 0;
	matrix = malloc ( 4 * 4);
	if (!matrix)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (NULL);
	}
	while (i < 4)
	{
		matrix[i] = malloc(4 * 4);
		i ++;
	}
	return (matrix);
}

int	comp(int **matrix, int **table)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = try_comb(matrx[i][j], table[i]);
			if (correct(matrix[i][j]
