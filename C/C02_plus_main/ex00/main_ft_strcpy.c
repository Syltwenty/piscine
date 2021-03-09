/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 11:20:29 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 13:56:50 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	argc = 5;
	printf("%s\n", ft_strcpy(argv[1], argv[3]));
	printf("%s\n", strcpy(argv[2], argv[4]));
	return (0);
}
