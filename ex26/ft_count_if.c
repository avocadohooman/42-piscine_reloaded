/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmolin <gmolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:10:53 by gmolin            #+#    #+#             */
/*   Updated: 2019/10/15 14:26:17 by gmolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
