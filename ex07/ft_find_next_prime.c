/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:01:54 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/23 17:01:58 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb / i >= i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{	
	nb++;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 0)
	{
		while (!(ft_is_prime(nb)))
			nb++;
	}
	return (nb);
}

// #include <stdio.h>

// int main()
// {
// 	int nb = -9;
// 	int i = 45;
// 	while (nb < i)
// 	{
// 		printf("%d----->%d\n",nb, ft_find_next_prime(nb));
// 		nb ++;
// 	}
// }