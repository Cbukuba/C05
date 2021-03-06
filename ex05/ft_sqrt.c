/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:33:02 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/22 01:24:42 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i ++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int nb = 2147395000; 
// 	while (nb <= 2147395600)
// 	{
// 		printf("%d\n", ft_sqrt(nb));
// 		nb ++;
// 	}
// }