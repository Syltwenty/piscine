/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 17:02:14 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 17:39:19 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		index;

	index = 0;
	if (!str)
		return (0);
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		else
			index++;
	}
	return (1);
}
