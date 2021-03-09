/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 10:22:43 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 18:01:59 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_mid_line(x, en_x, end_y)
{

}

void	print_tip_line(x, end_x)
{
	while (end_x < x)
	{
		if (end_x == 0 || end_x == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		end_x++;
	}
}

void	rush(int x, int y)
{
	char	tab[y][x];
	int		end_y;

	end_x = 0;
	end_y = 0;
	while (end_x < y)
	{
		while (end_x < x)
		{
			print_line(x, end_x);
			end_x++;
		}
		end_y++;
	}
}
