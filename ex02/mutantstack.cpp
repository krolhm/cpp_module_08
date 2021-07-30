/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:55:21 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 12:20:52 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &_stack) : std::stack<T>(_stack)
{
    
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &_stack)
{
    if (this != &_stack)
        this->c = _stack.c;
    return (*this);
}
