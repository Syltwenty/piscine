/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:30 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 20:55:34 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char src[] = "i";
	char dest[20] = "aabbbbccc";
	char src2[] = "i";
	char dest2[20] = "aabbbbccc";
	
	printf("%u\n%lu\n", ft_strlcat(dest, src, 19), strlcat(dest2, src2, 19));
	printf("%s\n%s\n", dest, dest2);
}
