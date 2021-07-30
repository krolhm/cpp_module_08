/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:55:53 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 19:10:03 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
 
Span::Span(unsigned int N): _vectorLength(N)
{
	_vector.clear();
}

Span::~Span()
{
    
}

void Span::addNumber(int number)
{
	if (_vector.size() < _vectorLength)
		_vector.push_back(number);
	else
		throw VectorFullException();
}

void Span::addRandNumber(int max)
{
    srand(time(NULL));
    if (_vector.size() < _vectorLength)
        for (int i = 0; i < max; i++)
            _vector.push_back(rand());
    else
        throw VectorFullException();
}

unsigned int Span::shortestSpan()
{
    if (_vector.size() < 2)
        throw NumbersException();
    std::sort(_vector.begin(), _vector.end());
    std::vector<int>::iterator it;
    unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
    for (it = _vector.begin(); it != _vector.end(); it++)
    {
        if ((*(it + 1) - *it) < shortestSpan)
            shortestSpan = (*(it + 1) - *it);
    }
    return (shortestSpan);
}

unsigned int Span::longestSpan() const
{
    if (_vector.size() < 2)
        throw NumbersException();
    unsigned int longestSpan = static_cast<unsigned int>(*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
    return (longestSpan);
}