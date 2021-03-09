/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   inter.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 16:30:43 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 17:00:12 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_present(char c, char *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == c)
			return(0);
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_inter(char *s1, char *s2)
{
	char tab[128];
	int i;
	int j;
	int k;
	
	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j] && ft_present(s1[i], tab))
			{
				tab[k] = s1[i];
				k++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	tab[k] = '\0';
	k = 0;
	ft_putstr(tab);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
		ft_putchar('\n');
	else
	{
		ft_inter(argv[1], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
