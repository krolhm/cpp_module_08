/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:55:23 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 18:59:52 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <cstring>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        MutantStack(const MutantStack<T> &mutantstack);
        MutantStack &operator=(const MutantStack &mutantstack);
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin() { return this->c.begin(); };
        const_iterator begin() const { return this->c.begin(); };
        reverse_iterator rbegin() { return this->c.rbegin(); };
        const_reverse_iterator rbegin() const { return this->c.rbegin(); };
        iterator end() { return this->c.end(); };
        const_iterator end() const { return this->c.end(); };
        reverse_iterator rend() { return this->c.rend(); };
        const_reverse_iterator rend() const { return this->c.rend(); };
};

/* **************************** Color ******************************* */
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define PINK    "\033[35m"
/* ******************************************************************** */

#endif