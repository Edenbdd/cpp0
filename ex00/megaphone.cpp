/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aubertra <aubertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:52:35 by aubertra          #+#    #+#             */
/*   Updated: 2025/03/03 10:38:36 by aubertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int				i;
	int				j;
	unsigned char	c;

	i = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c = std::toupper(argv[i][j]);
			if (isalpha(argv[i][j]))
				std::cout << c;
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;	
}
