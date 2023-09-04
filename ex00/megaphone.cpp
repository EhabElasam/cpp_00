/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <Ehab@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:30:28 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/04 14:42:07 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (ac > 1 && av && av[j])
    {
        i = 0;
        while (j > 0 && av[j][i])
        {
            std::cout << (char)std::toupper(av[j][i]);
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return (0);
}

// using namespace std;
