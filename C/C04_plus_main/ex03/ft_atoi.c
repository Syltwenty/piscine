/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: sylducam <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 21:45:03 by sylducam     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 13:31:21 by sylducam    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int integer;

	i = 0;
	sign = 1;
	integer = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i]
			== '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		integer = integer * 10 + (str[i] - '0');
		i++;
	}
	return (integer * sign);
}
