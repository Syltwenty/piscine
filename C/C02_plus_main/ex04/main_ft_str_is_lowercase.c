/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 17:02:23 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:39:21 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(int argc, char **argv)
{
	argc = 2;
	printf("%d\n", ft_str_is_lowercase(argv[1]));
	return (0);
}
