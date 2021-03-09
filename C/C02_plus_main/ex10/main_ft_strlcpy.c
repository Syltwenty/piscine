/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 14:23:05 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 21:22:15 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned	ft_strlcpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	argc = 5;
	printf("%u\n", ft_strlcpy(argv[1], argv[3], 9));
	printf("%lu\n", strlcpy(argv[2], argv[4], 9));
	int i;
	i = 0;
	while (i < 20)
	{
		printf("%d ", argv[1][i]);
		i++;
	}
		printf("\n");
	i = 0;
	while (i < 20)
	{
		printf("%d ", argv[2][i]);
		i++;
	}
		printf("\n");
	return (0);
}
