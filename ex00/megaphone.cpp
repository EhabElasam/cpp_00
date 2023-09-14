/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:30:28 by eelasam           #+#    #+#             */
/*   Updated: 2023/09/11 12:51:47 by eelasam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    std::string args;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        
        for (int j = 1; j < argc; j++)
        {
            
            args += argv[j];
            for(int i = 0; args[i]; i++)
                args.at(i) = std::toupper(args.at(i));
        }
    }
    std::cout << args << std::endl;
    return 0;
}

