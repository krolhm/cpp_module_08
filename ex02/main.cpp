/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:55:19 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 12:28:08 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    // STACK TEST
    std::cout << std::endl << GREEN BOLD << "STACK TEST:" << RESET << std::endl;
    std::cout << GREEN;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    // LIST TEST
    std::cout << std::endl << BLUE BOLD << "LIST TEST:" << RESET << std::endl;
    std::cout << BLUE;

    std::list<int> list;

    list.push_back(5);
    list.push_back(17);

    std::cout << list.back() << std::endl;

    list.pop_back();

    std::cout << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while (itlist != itliste)
    {
        std::cout << *itlist << std::endl;
        ++itlist;
    }

    return (0);
}