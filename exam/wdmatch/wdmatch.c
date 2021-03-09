/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wdmatch.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 13:46:46 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 16:10:17 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	syl_print(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			j++;
		if (s1[i] == '\0')
			syl_print(s1);	
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
		write(1, "\n", 1);
	else
		wdmatch(argv[1], argv[2]);
	return (0);
}
