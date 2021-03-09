/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 16:07:56 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/09 16:44:16 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1 = "abcdfgh";
	char *s2 = "abcdzfgh";
	printf("%d\n%d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	return (0);
}
