/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nlecaill <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:16:57 by nlecaill     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 11:38:36 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** This program will create and display a square made with specifix characters.
** the size of this square is to be defined in the main.c file with x and y.
**
** 1. first, the mother function called rush
**    at the bottom of the file will call :
**
** 2. the fill_array function which creates and fills an array of x * y size.
**
** 3. the display_array function which purpose is to display the
**    characters allready put in the array
*/

void	ft_putchar(char c);

void	display_array(int x, int y, int count_x, int count_y)
{
	char	tab[x][y];

	x -= 1;
	y -= 1;
	while (count_y <= y)
	{
		while (count_x <= x)
		{
			ft_putchar(tab[count_x][count_y]);
			count_x++;
		}
		count_y++;
		count_x = 0;
		ft_putchar('\n');
	}
}

void	fill_array(int x, int y, int count_x, int count_y)
{
	char	tab[x][y];

	x -= 1;
	y -= 1;
	while (count_y <= y)
	{
		while (count_x <= x)
		{
			if (count_x == 0 || count_x == x)
				tab[count_x][count_y] = 'B';
			else if (count_y == 0 || count_y == y)
				tab[count_x][count_y] = 'B';
			else
				tab[count_x][count_y] = ' ';
			count_x++;
		}
		count_y++;
		count_x = 0;
	}
	tab[0][0] = 'A';
	tab[x][0] = 'A';
	tab[0][y] = 'C';
	tab[x][y] = 'C';
}

int		rush(int x, int y)
{
	int		count_y;
	int		count_x;

	count_y = 0;
	count_x = 0;
	if (!(x > 0 && y > 0))
		return (0);
	fill_array(x, y, count_x, count_y);
	display_array(x, y, count_x, count_y);
	return (0);
}
