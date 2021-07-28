/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:13:42 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/28 17:44:50 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class except : public std::exception
{
    const char *what() const throw()
    {
        return ("Occurrence can't be found !");
    };
};

template<typename T> 
void easyfind(T a, int b)
{
    if (std::find(a.begin(), a.end(), b) != a.end())
        std::cout << "First occurrence of the second parameter in the first parameter: " << b << std::endl;
    else
        throw except();
}

#endif