/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:30 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 16:22:03 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	argc = 5;
	printf("%d\n%d\n", ft_strcmp(argv[1], argv[3]), strcmp(argv[2], argv[4]));
	return (0);
}
