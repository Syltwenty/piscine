/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 14:23:05 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 17:56:00 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	argc = 5;
	printf("%s\n", ft_strncpy(argv[1], argv[3], 0));
	printf("%s\n", strncpy(argv[2], argv[4], 0));
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
