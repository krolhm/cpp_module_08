/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:55:44 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/30 19:14:51 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span a(5);
	a.addNumber(-1);
	a.addNumber(5);
	a.addNumber(7);
	a.addNumber(2);
	a.addNumber(42);
    // sp.addNumber(42);

	std::cout << "Shortest Span: " << a.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << a.longestSpan() << std::endl;
	
	Span b(10);
	b.addRandNumber(10);

	std::cout << "Shortest Span: " << b.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << b.longestSpan() << std::endl;

	return (0);
}