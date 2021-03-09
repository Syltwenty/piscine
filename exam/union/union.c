/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   union.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 16:28:55 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 13:33:14 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	int tab[128];
	int i;
	
	i = 0;
	while (i <= 128)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if (tab[s1[i] - 48] == 0)
		{
			ft_putchar(s1[i]);
			tab[s1[i] - 48] = 1;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[s2[i] - 48] == 0)
		{
			ft_putchar(s2[i]);
			tab[s2[i] - 48] = 1;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 3)
		ft_putchar('\n');
	else
	{
		ft_union(argv[1], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
