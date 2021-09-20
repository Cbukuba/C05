/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:41:41 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/20 08:41:43 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	cmp;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb / i > i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(14));
}*/