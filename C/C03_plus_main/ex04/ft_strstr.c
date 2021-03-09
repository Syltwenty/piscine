/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 10:40:23 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 12:03:27 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0' && str[i - 1] == to_find[j - 1])
			return (&str[i - j]);
		j = 0;
		i++;
	}
	return (0);
}
