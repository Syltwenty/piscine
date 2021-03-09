/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 21:32:32 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 21:49:29 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		hex;

	hex = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 127))
		{
			while (str[index] != 0)
			{
				hex += str[index] % 16;
				str[index] = str[index] % 16;
			}
			ft_putchar('\\');
			ft_
		}
	}
}
