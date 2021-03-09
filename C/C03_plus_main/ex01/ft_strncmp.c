/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:23 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 16:34:07 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				result;

	index = 0;
	result = 0;
	while (index < n)
	{
		if (s1[index] != s2[index])
		{
			result += (s1[index] - s2[index]);
			return (result);
		}
		index++;
	}
	return (result);
}
